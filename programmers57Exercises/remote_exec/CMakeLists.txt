cmake_minimum_required(VERSION 3.18)  # Ensure CMake version supports CUDA

project(CudaProject LANGUAGES CXX CUDA)

# Define the remote build directory and user/host
set(REMOTE_USER "user")
set(REMOTE_HOST "remote_host")
set(REMOTE_DIR "/home/user/CudaProject")
set(LOCAL_OUTPUT_DIR "./output")

# Define the CUDA executable
add_executable(CudaExecutable main.cu)

# Specify the C++ standard if necessary
set_target_properties(CudaExecutable PROPERTIES CXX_STANDARD 14)

# Custom commands for remote operations
function(remote_command cmd)
    execute_process(
        COMMAND ssh ${REMOTE_USER}@${REMOTE_HOST} ${cmd}
        RESULT_VARIABLE res
    )
    if(NOT ${res} EQUAL 0)
        message(FATAL_ERROR "Remote command failed: ${cmd}")
    endif()
endfunction()

# Copy files to the remote machine
add_custom_target(copy ALL
    COMMAND scp -r ${CMAKE_SOURCE_DIR}/* ${REMOTE_USER}@${REMOTE_HOST}:${REMOTE_DIR}
    COMMENT "Copying project files to remote machine..."
)

# Build the project on the remote machine
add_custom_target(build_remote ALL
    COMMAND ${CMAKE_COMMAND} -E env REMOTE_DIR=${REMOTE_DIR} CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}
            ${CMAKE_COMMAND} -DCMAKE_TOOLCHAIN_FILE=${CMAKE_SOURCE_DIR}/RemoteToolchain.cmake -B ${CMAKE_BINARY_DIR} -S ${CMAKE_SOURCE_DIR}
    COMMAND remote_command "cd ${REMOTE_DIR} && mkdir -p build && cd build && cmake .. && make"
    DEPENDS copy
    COMMENT "Building project on remote machine..."
)

# Execute the built executable on the remote machine
add_custom_target(execute_remote ALL
    COMMAND remote_command "cd ${REMOTE_DIR}/build && ./CudaExecutable > output.txt"
    DEPENDS build_remote
    COMMENT "Executing the built executable on remote machine..."
)

# Retrieve the output file from the remote machine
add_custom_target(retrieve ALL
    COMMAND ${CMAKE_COMMAND} -E make_directory ${LOCAL_OUTPUT_DIR}
    COMMAND scp ${REMOTE_USER}@${REMOTE_HOST}:${REMOTE_DIR}/build/output.txt ${LOCAL_OUTPUT_DIR}/output.txt
    DEPENDS execute_remote
    COMMENT "Retrieving output file from remote machine..."
)

# Clean up the build directory on the remote machine
add_custom_target(clean_remote
    COMMAND remote_command "cd ${REMOTE_DIR} && rm -rf build"
    COMMENT "Cleaning up build directory on remote machine..."
)

# Default target depends on retrieve
add_custom_target(all DEPENDS retrieve)

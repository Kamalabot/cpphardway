cmake_minimum_required(VERSION 3.18)  # Ensure CMake version supports CUDA

project(main LANGUAGES CXX)

# Define the remote build directory and user/host
set(REMOTE_USER "aicoder")
set(REMOTE_HOST "aicontroller")
set(REMOTE_DIR "/home/aicoder/tmp/")
set(LOCAL_OUTPUT_DIR "D:/gitFolders/cpphardway/programmers57Exercises/remote_exec/")

# Define the CUDA executable
add_executable(main main.cpp)

# Specify the C++ standard if necessary
set_target_properties(main PROPERTIES CXX_STANDARD 14)

# Helper function to convert Windows paths to Unix paths for scp
function(unix_to_windows_path WIN_PATH UNIX_PATH_VAR)
    string(REPLACE "\\" "\\" UNIX_PATH ${WIN_PATH})
    set(${UNIX_PATH_VAR} ${UNIX_PATH} PARENT_SCOPE)
endfunction()


# Convert CMake source directory path to Unix format
windows_to_unix_path(${CMAKE_SOURCE_DIR} CMAKE_SOURCE_DIR_UNIX)

# Convert CMake local output directory path to Unix format
windows_to_unix_path(${LOCAL_OUTPUT_DIR} LOCAL_OUTPUT_DIR)

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
    COMMAND scp -r ${CMAKE_SOURCE_DIR}/*.* ${REMOTE_USER}@${REMOTE_HOST}:${REMOTE_DIR}
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
    COMMAND remote_command "cd ${REMOTE_DIR}/build && ./main > output.txt"
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
add_custom_target(run_all DEPENDS retrieve)

# Makefile for remote build and compilation with IP address and SSH connection

# Define the remote IP address and username
REMOTE_IP = 192.168.1.170
REMOTE_USER = aicoder

# Define the local and remote build directories
LOCAL_BUILD_DIR = . 
REMOTE_BUILD_DIR = /home/aicoder/tmp/

# Define the build target
build:
# Create the remote build directory if it doesn't exist
	ssh ${REMOTE_USER}@${REMOTE_IP} "mkdir -p ${REMOTE_BUILD_DIR}"

# Copy the source files to the remote build directory
	scp *.cpp ${REMOTE_USER}@${REMOTE_IP}:${REMOTE_BUILD_DIR}

# Compile the source files on the remote machine
	ssh ${REMOTE_USER}@${REMOTE_IP} "g++ -o ${REMOTE_BUILD_DIR}/main ${REMOTE_BUILD_DIR}/*.cpp"

# Copy the executable file back to the local machine
	scp ${REMOTE_USER}@${REMOTE_IP}:${REMOTE_BUILD_DIR}/main .

# Run the executable file
run:
	./main
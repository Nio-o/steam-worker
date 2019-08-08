
SRC_WORKER = ./src
BUILD_PATH = ./build

all: build-linux64

build-linux64: $(SRC_WORKER)/main.cpp $(SRC_WORKER)/linux64/libsteam_api.so 
	g++ -o $(BUILD_PATH)/steam-worker $(SRC_WORKER)/main.cpp -L$(SRC_WORKER)/linux64 -lsteam_api
	cp $(SRC_WORKER)/linux64/libsteam_api.so ${BUILD_PATH}
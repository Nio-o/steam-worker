#include <iostream>
#include <fstream>
#include "./steam/steam_api.h"
#include <vector>
#include <ctime>

using namespace std;

void log(string, string);

void log(string str, string type) {
    cout << "Steam Worker [" << type << "]: " << str << std::endl; 
}

int main(int argc, char* argv[])
{   
    setenv("SteamAppId", argv[1], 1);

    if (!SteamAPI_Init()) {
        log("SteamAPI_Init() failed", "ERROR");
        return -1;
    }

    while (true) {

    }
}

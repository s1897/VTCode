#include "MCSU_func.hpp"

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// █    █  ███  ███ █    █
// ██  ██ █   █  █  ██   █
// █ ██ █ █████  █  █ █  █
// █    █ █   █  █  █  █ █
// █    █ █   █ ███ █   ██
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

int main()
{
    // string l = GET_LAST_VERSION();
    // cout << GET_JSON(l);
    string URL = "https://launchermeta.mojang.com/mc/game/version_manifest.json";
    string FILE_NAME = "version_manifest.json";
    string VERSION_TYPE = "release"; //"snapshot"
    string LAST_VERSION;
    string VERSION_JSON_URL;
    string SERVER_JAR_URL;

    GET_FILE(URL, FILE_NAME);

    LAST_VERSION = GET_LAST_VERSION(VERSION_TYPE);

    VERSION_JSON_URL = GET_LINKS(LAST_VERSION, ".json", FILE_NAME);

    GET_FILE(VERSION_JSON_URL, "version.json");
    SERVER_JAR_URL = GET_LINKS("server", ".jar", "version.json");

    GET_FILE(SERVER_JAR_URL, "server.jar");

    return 0;
}

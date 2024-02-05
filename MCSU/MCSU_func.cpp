#include "MCSU_func.hpp"

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// █████ █   █ █    █  ████ █████ ███  ████  █    █  ████
// █     █   █ ██   █ █       █    █  █    █ ██   █ █
// ███   █   █ █ █  █ █       █    █  █    █ █ █  █  ███
// █     █   █ █  █ █ █       █    █  █    █ █  █ █     █
// █      ███  █   ██  ████   █   ███  ████  █   ██ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

void GET_VERSION_MANIFEST()
{
    string URL = "https://launchermeta.mojang.com/mc/game/version_manifest.json";
    string FILE_NAME = "version_manifest.json";

    string WGET = "wget -P .\\ ";
    string RM = "rm .\\";

    ifstream FILE;

    FILE.open(".\\version_manifest.json");

    if (FILE.is_open())
    {
        FILE.close();
        system((RM + FILE_NAME).c_str());
        system((WGET + URL).c_str());
    }
    else
    {
        system((WGET + URL).c_str());
    }
}

void GET_FILE(string URL, string FILE_NAME)
{
}

string GET_LAST_VERSION(string VERSION_TYPE) // Last version "relese", "snapshot"
{
    fstream FILE_NAME;
    string FILE_CONTENT;

    regex REGEX_LAST_VERSIONS("\"" + VERSION_TYPE + "\":\\s\"([^\"]+)\"");

    smatch MATCH;

    FILE_NAME.open(".\\version_manifest.json", ios::in);

    if (FILE_NAME.is_open())
    {
        string LINE;

        while (getline(FILE_NAME, LINE))
        {
            FILE_CONTENT += LINE;
        }
    }

    regex_search(FILE_CONTENT, MATCH, REGEX_LAST_VERSIONS);

    return string(MATCH[1]);
}

string GET_JSON(string VERSION_NUMBER) // Version name "1.20.4", "24w05b"
{
    fstream FILE_NAME;
    string FILE_CONTENT;

    regex REGEX_GET_JSON("([^\"]+" + VERSION_NUMBER + ".json)");

    smatch MATCH;

    FILE_NAME.open(".\\version_manifest.json", ios::in);

    if (FILE_NAME.is_open())
    {
        string LINE;

        while (getline(FILE_NAME, LINE))
        {
            FILE_CONTENT += LINE;
        }
    }

    regex_search(FILE_CONTENT, MATCH, REGEX_GET_JSON);

    return string(MATCH[1]);
}

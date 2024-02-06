#include "MCSU_func.hpp"

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// █████ █   █ █    █  ████ █████ ███  ████  █    █  ████
// █     █   █ ██   █ █       █    █  █    █ ██   █ █
// ███   █   █ █ █  █ █       █    █  █    █ █ █  █  ███
// █     █   █ █  █ █ █       █    █  █    █ █  █ █     █
// █      ███  █   ██  ████   █   ███  ████  █   ██ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

void GET_FILE(string URL, string FILE_NAME, string PATH)
{
    string WGET = "wget ";
    string WGET_P = " -P " + PATH;
    string WGET_O = " -O " + FILE_NAME;
    string RM = "rm .\\";

    ifstream FILE;

    if (FILE.is_open())
    {
        FILE.close();
        system((RM + FILE_NAME).c_str());
        system((WGET + URL + WGET_P + WGET_O).c_str());
    }
    else
    {
        system((WGET + URL + WGET_P + WGET_O).c_str());
    }
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

string GET_LAST_VERSION(string VERSION_TYPE, string FILE_NAME) // Last version "relese", "snapshot"
{
    fstream FILE;
    string FILE_CONTENT;

    regex REGEX_LAST_VERSIONS("\"" + VERSION_TYPE + "\":\\s\"([^\"]+)\"");

    smatch MATCH;

    FILE.open(".\\" + FILE_NAME, ios::in);

    if (FILE.is_open())
    {
        string LINE;

        while (getline(FILE, LINE))
        {
            FILE_CONTENT += LINE;
        }
    }

    regex_search(FILE_CONTENT, MATCH, REGEX_LAST_VERSIONS);

    return string(MATCH[1]);
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

// string GET_JSON(string VERSION_NUMBER) // Version name "1.20.4", "24w05b"
// {
//     fstream FILE_NAME;
//     string FILE_CONTENT;

//     regex REGEX_GET_JSON("([^\"]+" + VERSION_NUMBER + ".json)");

//     smatch MATCH;

//     FILE_NAME.open(".\\version_manifest.json", ios::in);

//     if (FILE_NAME.is_open())
//     {
//         string LINE;

//         while (getline(FILE_NAME, LINE))
//         {
//             FILE_CONTENT += LINE;
//         }
//     }

//     regex_search(FILE_CONTENT, MATCH, REGEX_GET_JSON);

//     return string(MATCH[1]);
// }

string GET_LINKS(string FILE_NAME, string FILE_TYPE, string OPEN_FILE_NAME)
{
    fstream FILE;
    string FILE_CONTENT;

    regex REGEX_GET_JSON("([^\"]+" + FILE_NAME + FILE_TYPE + ")");

    smatch MATCH;

    FILE.open(".\\" + OPEN_FILE_NAME, ios::in);

    if (FILE.is_open())
    {
        string LINE;

        while (getline(FILE, LINE))
        {
            FILE_CONTENT += LINE;
        }
    }

    regex_search(FILE_CONTENT, MATCH, REGEX_GET_JSON);

    return string(MATCH[1]);
}

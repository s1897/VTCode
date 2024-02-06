#ifndef MCSU_FUNC_H
#define MCSU_FUNC_H

#include <iostream>

#include <stdio.h>
#include <stdlib.h>

#include <vector>
#include <string>
#include <fstream>
#include <regex>

using namespace std;

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// ████  █████  ████ █      ███  ████  █████     █████ █   █  ████ █████ ███  ████  █    █  ████
// █   █ █     █     █     █   █ █   █ █         █     █   █ █       █    █  █    █ ██   █ █
// █   █ ███   █     █     █████ ████  ███       ███   █   █ █       █    █  █    █ █ █  █  ███
// █   █ █     █     █     █   █ █   █ █         █     █   █ █       █    █  █    █ █  █ █     █
// ████  █████  ████ █████ █   █ █   █ █████     █      ███   ████   █   ███  ████  █   ██ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

void GET_FILE(string URL, string FILE_NAME, string PATH = ".\\");

string GET_LAST_VERSION(string VERSION_TYPE = "release", string FILE_NAME = "version_manifest.json");

// string GET_JSON(string VERSION_NUMBER);

string GET_LINKS(string FILE_NAME, string FILE_TYPE, string OPEN_FILE_NAME);

#endif
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

void GET_VERSION_MANIFEST();

void GET_FILE(string URL, string FILE_NAME);

string GET_LAST_VERSION(string VERSION_TYPE = "release");

string GET_JSON(string VERSION_NUMBER);

#endif
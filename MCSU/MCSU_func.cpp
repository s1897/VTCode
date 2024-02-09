#include "MCSU_func.hpp"

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// █████ █   █ █    █  ████ █████ ███  ████  █    █  ████
// █     █   █ ██   █ █       █    █  █    █ ██   █ █
// ███   █   █ █ █  █ █       █    █  █    █ █ █  █  ███
// █     █   █ █  █ █ █       █    █  █    █ █  █ █     █
// █      ███  █   ██  ████   █   ███  ████  █   ██ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ████ ████   ████  █    █ █████  ███  ████
// █     █   █ █    █ ██   █   █   █   █ █   █
// █     ████  █    █ █ █  █   █   █████ ████
// █     █   █ █    █ █  █ █   █   █   █ █   █
//  ████ █   █  ████  █   ██   █   █   █ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

bool EXECUTE_TABEL(string EXECUTE_IMPUT)
{
    /*
      The time format is:

    .------------------ seconds   | 00 - 59 |
    | .---------------- minutes   | 00 - 59 |
    | | .-------------- houers    | 00 - 23 |
    | | | .------------ days      | 01 - 31 |
    | | | | .---------- months    | 01 - 12 |
    | | | | | .-------- years     | 2025 - ... |
    | | | | | | .------ week days | 00 - 07 |
    | | | | | | |
    * * * * * * *

    This symbol * means every time, for example, if the month is a *,
    it will be executed every month. The same applies to the minutes, hours ...
    If you add a number to the *, then it while be a interval. For example *10 is every 10 sec ...
    The interval are referenced from 00:00:00 GMT, Jan 1, 1970

    There are also defined Options:
    @hourly   ->  00 00 00  *  *  *  *
    @daily    ->  00 00 00 01  *  *  *
    @monthly  ->  00 00 00 01 01  *  *
    @yearly   ->  00 00 00 01 01  *  *
    @weekly   ->  00 00 00  *  *  * 00
    @reboot   ->  After Reboot

    */

    return false;
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ████ ████  █████  ███  █████ █████       ████  ████   ████  ████  █████ ████  █████ ███  ████       █████ ███ █     █████
// █     █   █ █     █   █   █   █           █   █ █   █ █    █ █   █ █     █   █   █    █  █           █      █  █     █
// █     ████  ███   █████   █   ███         ████  ████  █    █ ████  ███   ████    █    █   ███        ███    █  █     ███
// █     █   █ █     █   █   █   █           █     █   █ █    █ █     █     █   █   █    █      █       █      █  █     █
//  ████ █   █ █████ █   █   █   █████ █████ █     █   █  ████  █     █████ █   █   █   ███ ████  █████ █     ███ █████ █████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

void CREATE_PROPERTIS_FILE()
{
    /*
    # <- Commend Line

    VERSION_MANIFEST_URL=https://launchermeta.mojang.com/mc/game/version_manifest.json

    # Options: snapshot | release | old_beta | old_alpha
    VERSION_TYPE=relese

    # Examles: 1.16.5 | 21w18a | 1.1 | rd-20090515
    VERSION_NAME=

    # Server main dictionary name
    MAIN_DICTIONARY=SERVER

    # Short term backup dictionary name
    SHORT_TERM_BACKUP_DICTIONARY=SHORT_TERM_BACK_UP

    # How many short term backup are made before they get deleted.
    SHORT_TERM_BACKUP_COUNT=12

    # When does the backup happen.
    # The time format:
    # @hourly               .------------------ seconds   | 00 - 59 |
    # @daily                | .---------------- minutes   | 00 - 59 |
    # @monthly              | | .-------------- houers    | 00 - 23 |
    # @yearly               | | | .------------ days      | 01 - 31 |
    # @weekly               | | | | .---------- months    | 01 - 12 |
    # @reboot               | | | | | .-------- years     | 2025 - ... |
    #                       | | | | | | .------ week days | 00 - 07 |
    #                       | | | | | | |
    #                       * * * * * * *
    SHORT_TERM_BACKUP_TIME=@daily

    #LONG term backup dictionary name
    LONG_TERM_BACKUP_DICTIONARY=LONG_TERM_BACK_UP

    #How many long term backup are made before they get deleted.
    #Options: 12 | NEVER
    LONG_TERM_BACKUP_COUNT=NEVER

    # When does the backup happen.
    # The time format:
    # @hourly               .------------------ seconds   | 00 - 59 |
    # @daily                | .---------------- minutes   | 00 - 59 |
    # @monthly              | | .-------------- houers    | 00 - 23 |
    # @yearly               | | | .------------ days      | 01 - 31 |
    # @weekly               | | | | .---------- months    | 01 - 12 |
    # @reboot               | | | | | .-------- years     | 2025 - ... |
    #                       | | | | | | .------ week days | 00 - 07 |
    #                       | | | | | | |
    #                       * * * * * * *
    LONG_TERM_BACKUP_TIME=00 00 00 *14 * * *

    */
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
// ████  █████  ███  ████        █████ ████   ████  █    █       ████  ████   ████  ████  █████ ████  █████ ███  ████       █████ ███ █     █████
// █   █ █     █   █ █   █       █     █   █ █    █ ██  ██       █   █ █   █ █    █ █   █ █     █   █   █    █  █           █      █  █     █
// ████  ███   █████ █   █       ███   ████  █    █ █ ██ █       ████  ████  █    █ ████  ███   ████    █    █   ███        ███    █  █     ███
// █   █ █     █   █ █   █       █     █   █ █    █ █    █       █     █   █ █    █ █     █     █   █   █    █      █       █      █  █     █
// █   █ █████ █   █ ████  █████ █     █   █  ████  █    █ █████ █     █   █  ████  █     █████ █   █   █   ███ ████  █████ █     ███ █████ █████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

void READ_FROM_PROPERTIS_FILE()
{
}

// ▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀
//  ███  █████ █████       █████ ███ █     █████
// █     █       █         █      █  █     █
// █  ██ ███     █         ███    █  █     ███
// █   █ █       █         █      █  █     █
//  ███  █████   █   █████ █     ███ █████ █████
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
//  ███  █████ █████       █      ███   ████ █████       █   █ █████ ████   ████ ███  ████  █    █
// █     █       █         █     █   █ █       █         █   █ █     █   █ █      █  █    █ ██   █
// █  ██ ███     █         █     █████  ███    █         █   █ ███   ████   ███   █  █    █ █ █  █
// █   █ █       █         █     █   █     █   █          █ █  █     █   █     █  █  █    █ █  █ █
//  ███  █████   █   █████ █████ █   █ ████    █   █████   █   █████ █   █ ████  ███  ████  █   ██
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
//  ███  █████ █████       █     ███ █    █ █   █  ████
// █     █       █         █      █  ██   █ █  █  █
// █  ██ ███     █         █      █  █ █  █ ███    ███
// █   █ █       █         █      █  █  █ █ █  █      █
//  ███  █████   █   █████ █████ ███ █   ██ █   █ ████
// ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄

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

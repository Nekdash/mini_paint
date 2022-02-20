#include "Header.h"

// takes the vector where it will save arguments
// takes 1 command
// writes the arguments for later use

void slice_commands(vector<string>& arguments, string command) {
    string arg;
    for (int i = 0; i <= command.size(); i++) {
        if ((command[i] == ' ' || command[i] == '\0') && itc_len(arg) > 0)
        {
            arguments.push_back(arg);
            arg = "";
        }
        else {
            arg += command[i];
        }
    }
}
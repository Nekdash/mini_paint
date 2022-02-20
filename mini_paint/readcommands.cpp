#include "Header.h"

// retrieves the command lines from the file
// in case the file cannot be opened - throws an error
// saves to vector you create beforehead
 

void readcommands(string filepath, vector<string>& commands) {
    ifstream file;
    string command;
    file.open(filepath);
    if (file.is_open()) {
        while (getline(file, command))
            commands.push_back(command);
    }
    else {
        error("Error: Operation file corrupted"); // oooops smth went wrong!!
        file.close();
    }
}
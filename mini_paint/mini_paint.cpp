#include <iostream>
#include "Header.h"
#include <fstream>
#include <vector>
#include <string>
using namespace std;

// WELCOME!!!
// 
// you visisted the main function of the project
// to find each function - visit Header.h
//

int main()
{
    bool saver = false;
    string filepath;
    vector<string> commands;
    vector<string> arguments;

    // retrieve path and save
    setter(filepath, saver);
    if (path_checker(filepath) == -1) return -1; // check the path
    else readcommands(filepath, commands); // retrieve set of commands
    
    //setting background
    if (commands.size() == 0) {
        error("Error: empty file");
        return -1;
    }
    slice_commands(arguments, commands[0]); // retrieve args for background

    if (commands_check(arguments) != true) return -1;

    int width = str_to_num(arguments[0]), height = str_to_num(arguments[1]);
    char background_char = arguments[2][0];

    if (background_check(width, height) == false) return -1;

    vector<vector<char>> field(height, vector<char>(width));
    //set color filed here
    //background(filed, width, height, background_char, color);

    if (commands.size() > 1) run_commands();

    //print the field
    if (saver) run_saver(field, filepath);
    
}
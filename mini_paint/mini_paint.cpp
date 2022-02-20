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
    // vector<vector<int>> color; -- FOR COLOR IF NEEDED
    // background(filed, width, height, background_char, color);

    if (commands.size() > 1) {
    
        for (int i = 0; i < commands.size(); i++) {
            slice_commands(arguments, commands[i]);
            if (!commands_check(args)) return -1;
            if (arguments[0] == "r") {
                //call rect OR colored rect
            }
            else if (arguments[0] == "R") {
                //call filled rect OR colored
            }
            else if (arguments[0] == "L") {
                //call the line OR colored
            }
            else if (arguments[0] == "c") {
                //call the circle OR colored
            }
            else if (arguments[0] == "C") {
                // call the filled circle OR colored
            }
            else {
                error("Error: invalid function");
                return -1;
            }
        }

    }

    //print the field

    //save the file
    if (saver) run_saver(field, filepath);
    
}
#pragma once
#include <iostream>
#include "Header.h"
#include <fstream>
#include <vector>
#include <string>
#include <Windows.h>
using namespace std;


//WELCOME TO THE HEADER!!!
// 
//every function has the name of the file, where it's located, written above
//inside the files you can read the distriptions for all functions!!!
//
//thanks for your concern 'bout the project!!!



//functions
int absi(int a);
string slicer(string str, int start, int endd);
long long itc_len(string str);
bool isnum(string s);
long long str_to_num(string temp);

//setcolor
void SetColor(int a, int bg);

//error
void error(string error);

//setter
int setter(string& filepath, bool& saver); 

//path_checker
int path_checker(string& filepath); 

//readcommands
void readcommands(string filepath, vector<string>& commands);

//slice_commands
void slice_commands(vector<string>& arguments, string command);

//commands_check
bool commands_check(vector<string>& args);

//background_check
bool background_check(int w, int h);

//run_saver
void run_saver(vector<vector<char>> field, string filepath);

//run_commands

#include "Header.h"

// WELCOME TO HELL!!!
// 
// respectively checks the commands and arguments for validity
//

bool commands_check(vector<string>& args) {
	int s = args.size();
	if (args[0] == "r" || args[0] == "R") {
		if (s != 6 && s != 9) {
			error("Error: number of arguments is wrong");
			return false;
		}
		if (s == 6 && !(isnum(args[1]) && isnum(args[2]) && isnum(args[3]) && isnum(args[4]))) {
			error("Error: invalid arguments");
			return false;
		} 
		if (s == 9 && !(isnum(args[1]) && isnum(args[2]) && isnum(args[3]) && isnum(args[4]) && isnum(args[6]) && isnum(args[7]) && isnum(args[8])) ){
			error("Error: invalid arguments");
			return false;
		}
		if (itc_len(args[5]) > 1) {
			error("Error: needed char");
			return false;
		}
		if (str_to_num(args[1]) < 0) {
			error("Error: invalid number - negative x coordinate");
			return 0;
		}
		if (str_to_num(args[2]) < 0) {
			error("Error: invalid number - negative y coordinate");
				return 0;
		}
		if (str_to_num(args[3]) <= 0) {
			error("Error: invalid number - width too small");
			return false;
		}
		if (str_to_num(args[4]) <= 0) {
			error("Error: invalid number - height too small");
			return false;
		}
	}
	else if (args[0] == "L") {
		if (s != 6 && s != 9) {
			error("Error: number of arguments is wrong");
			return false;
		}
		if (s == 6 && !(isnum(args[1]) && isnum(args[2]) && isnum(args[3]) && isnum(args[4]))) {
			error("Error: invalid arguments");
			return false;
		}
		if (s == 9 && !(isnum(args[1]) && isnum(args[2]) && isnum(args[3]) && isnum(args[4]) && isnum(args[6]) && isnum(args[7]) && isnum(args[8]))) {
			error("Error: invalid arguments");
			return false;
		}
		if (str_to_num(args[1]) < 0) {
			error("Error: invalid number - negative x0 coordinate");
			return 0;
		}
		if (str_to_num(args[2]) < 0) {
			error("Error: invalid number - negative y0 coordinate");
			return 0;
		}
		if (str_to_num(args[3]) < 0) {
			error("Error: invalid number - negative x1 coordinate");
			return false;
		}
		if (str_to_num(args[4]) < 0) {
			error("Error: invalid number - negative y1 coordinate");
			return false;
		}
		if (itc_len(args[5]) != 1) {
			error("Error: needed char");
			return false;
		}
	}
	else if (args[0] == "c" || args[0] == "C") {
		if (s != 5 && s != 8) {
			error("Error: invalid number of arguments");
			return false;
		}
		if (s == 5 && !(isnum(args[1]) && isnum(args[2]) && isnum(args[3]))) {
			error("Error: invalid arguments");
			return false;
		}
		if (s == 8 && !(isnum(args[1]) && isnum(args[2]) && isnum(args[3]) && isnum(args[6]) && isnum(args[7]) && isnum(args[5]))) {
			error("Error: invalid arguments");
			return false;
		}

		if (str_to_num(args[1]) < 0) {
			error("Error: invalid number - negative x0 coordinate");
			return 0;
		}
		if (str_to_num(args[2]) < 0) {
			error("Error: invalid number - negative y0 coordinate");
			return 0;
		}
		if (str_to_num(args[3]) <= 0) {
			error("Error: invalid number - radius too small");
			return false;
		}
		if (itc_len(args[4]) != 1) {
			error("Error: needed char");
			return false;
		}

	}
	else {
		if (s != 3) {
			error("Error: invalid number of commands");
			return false;
		}
		if (!(isnum(args[0]) && isnum(args[1]))) {
			error("Error: invalid arguments");
			return false;
		}
		if (str_to_num(args[0]) <= 0 || str_to_num(args[1]) <= 0) {
			error("Error: invalid numbers - field size too small");
			return false;
		}

	}
	return true;
}
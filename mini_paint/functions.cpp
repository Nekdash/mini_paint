#include "Header.h"

//basic functions used throughout the entire project

int absi(int a) { // abs() analog
    if (a < 0)
        return a * (-1);
    return a;
}

long long itc_len(string str) { // determine the length of the string
    long long res = 0;
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

string slicer(string str, int start, int endd) { // str[2:3] analog
    string res = "";
    if (endd >= itc_len(str)) {
        endd = itc_len(str) - 1;
    }
    if (start > endd) {
        return str;
    }
    else if (start == (itc_len(str) - 1)) {
        res += str[itc_len(str) - 1];
        return res;
    }
    else {
        for (long long i = start; i <= endd; i++) {
            res += str[i];
        }
        return res;
    }

    return "-1";
}

bool isnum(string s) { // checks whether the string consists of only numbers
    for (int i = 0; i < itc_len(s); i++) {
        if (s[i] < '0' && s[i] > '9') return false;
    }
    return true;
}


long long str_to_num(string temp) { // translates string to int - from middle str
    int ch = 0;
    long long temp_num = 0;
    for (long long i = 0; temp[i] != '\0'; i++) {
        ch = temp[i] - 48;
        temp_num = temp_num * 10 + ch;
    }
    return temp_num;
}
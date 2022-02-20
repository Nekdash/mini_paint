#include "Header.h"

//retrieves the path as well as whether to save the picture

int setter(string& filepath, bool& saver) {

    string saver_str = " ";
    cout << "Write path:" << endl;
    cin >> filepath;

    while (saver_str[0] != 'y' && saver_str[0] != 'n') {
        cout << "Save file? (reply y or n)" << endl;
        cin >> saver_str;
    }
    if (saver_str[0] == 'y') {
        saver = true;
    }
    return 0;
}
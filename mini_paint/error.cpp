#include "Header.h"

//prints the error in red

void error(string error) {
    SetColor(12, 0);
    cout << error;
    SetColor(7, 0);
}
#include "Header.h"


//sets the color of the console text
void SetColor(int a, int bg) {
    HANDLE pr = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(pr, (WORD)((bg << 4) | a));
}
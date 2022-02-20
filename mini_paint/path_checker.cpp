#include "Header.h"

// checks the validity of the path (pretends to)

int path_checker(string& filepath) {
    ifstream check;
    int size = itc_len(filepath);
    if (size < 12) {
        error("Error: Operaion file corrupted");
        return -1;
    }
    if (slicer(filepath, size - 12, size - 3) != "operation") {
        error("Error: name file");
        return -1;
    }
    if (slicer(filepath, size - 2, size) != "it") {
        error("Error: Operation file has not correct extension");
        return -1;
    }
    return 0;
}

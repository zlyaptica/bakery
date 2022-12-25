#include "globals.h"

int LineCount(char *path)
{
    ifstream fin;
    fin.open(path);
    int lineCount = 0;
    while (!fin.eof()) {
        fin.ignore(100, '\n');
        lineCount++;
    }
    fin.close();
    return lineCount - 1;
}

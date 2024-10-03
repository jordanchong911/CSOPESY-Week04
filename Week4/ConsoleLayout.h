#ifndef CONSOLELAYOUT_H
#define CONSOLELAYOUT_H

#include <windows.h>
#include <string>  // Include the string header

class ConsoleLayout {
public:
    static void setCursorPosition(int x, int y);
    static void setConsoleTextAttribute(int color);
    static void resetConsoleTextAttribute();
    static std::string truncateOrPad(const std::string& str, int width);
};

#endif

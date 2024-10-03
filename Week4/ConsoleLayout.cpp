#include "ConsoleLayout.h"
#include <iostream>
#include <iomanip>

void ConsoleLayout::setCursorPosition(int x, int y) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { static_cast<SHORT>(x), static_cast<SHORT>(y) };
    SetConsoleCursorPosition(hConsole, pos);
}

void ConsoleLayout::setConsoleTextAttribute(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

void ConsoleLayout::resetConsoleTextAttribute() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 7);  // Default white
}

std::string ConsoleLayout::truncateOrPad(const std::string& str, int width) {
    if (str.length() > width) {
        return str.substr(0, width - 3) + "...";
    }
    else {
        return str + std::string(width - str.length(), ' ');
    }
}

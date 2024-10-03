// Utils.cpp
#include "Utils.h"
#include <cstdlib> // For system()

void clearScreen() {
#ifdef _WIN32
    system("cls"); // Windows specific command
#else
    system("clear"); // For Linux/Mac
#endif
}

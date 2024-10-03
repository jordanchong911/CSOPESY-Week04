#include <iostream>
#include <string>
#include "System.h"    // Your existing System and GPU files
#include "Utils.h"     // Header file for clearScreen
#include "Process.h"   // Include the Process header

void printASCII() {
    std::cout << R"(
   _,.----.    ,-,--.    _,.---._        _ __       ,----.    ,-,--.                   
 .' .' -   \ ,-.'-  _\ ,-.' , -  `.   .-`.' ,`.  ,-.--` , \ ,-.'-  _\ ,--.-.  .-,--. 
/==/  ,  ,-'/==/_ ,_.'/==/_,  ,  - \ /==/, -   \|==|-  _.-`/==/_ ,_.'/==/- / /=/_ /  
|==|-   |  .\==\  \  |==|   .=.     |==| _ .=. ||==|   `.-.\==\  \   \==\, \/=/. /   
|==|_   `-' \\==\ -\ |==|_ : ;=:  - |==| , '=',/==/_ ,    / \==\ -\   \==\  \/ -/    
|==|   _  , |_\==\ ,\|==| , '='     |==|-  '..'|==|    .-'  _\==\ ,\   |==|  ,_/     
\==\.       /==/\/ _ |\==\ -    ,_ /|==|,  |   |==|_  ,`-._/==/\/ _ |  \==\-, /      
 `-.`.___.-'\==\ - , / '.='. -   .' /==/ - |   /==/ ,     /\==\ - , /  /==/._/       
             `--`---'    `--`--''   `--`---'   `--`-----``  `--`---'   `--`-`         
   )" << std::endl;

    std::cout << "\033[32m" << "Welcome to CSOPESY command line!" << "\033[0m" << std::endl;
    std::cout << "\033[33m" << "Type 'exit' to quit the screen, 'clear' to clear the screen." << "\033[0m" << std::endl;
}

int main() {
    System sys;

    // Creating dummy GPU
    GPU gpu1("NVIDIA GeForce GTX 1080", "WDDM", "00000000:26:00.0", 28, 37, 11, 701, 0);
    sys.addGPU(gpu1);

    // Adding 5 dummy processes
    Process p1(1368, "C+G", "dwm.exe", "N/A");
    Process p2(2116, "C+G", "XboxGameBarWidgets.exe", "N/A");
    Process p3(4224, "C+G", "msedgewebview2.exe", "100MiB");
    Process p4(5684, "C+G", "explorer.exe", "150MiB");
    Process p5(6700, "C+G", "StartMenuExperienceHost.exe", "N/A");

    sys.addProcess(p1);
    sys.addProcess(p2);
    sys.addProcess(p3);
    sys.addProcess(p4);
    sys.addProcess(p5);

    std::string command;

    printASCII();   // Print the ASCII art and welcome message
    while (true) {

        std::cout << "Enter Command: ";
        std::getline(std::cin, command);

        // Main menu command processing
        if (command == "nvidia-smi") {
            clearScreen();  // Clear the screen before displaying GPU info
            sys.displaySystemInfo();  // Display the GPU and processes information
            while (true) {
                std::cout << "\nEnter Command: ";
                std::getline(std::cin, command);

                if (command == "exit") {
                    clearScreen();  // Clear the screen before displaying GPU info
                    printASCII();   // Print the ASCII art and welcome message
                    break;  // Exit back to main menu
                }
                else if (command == "nvidia-smi") {
                    clearScreen();  // Clear the screen before displaying GPU info
                    sys.displaySystemInfo();  // Display the GPU and processes information
                    continue;  // Show the system info again
                }
                else {
                    std::cout << "Wrong Command!" << std::endl << std::endl; // Add two new lines
                }
            }
        }
        else if (command == "exit") {
            break;  // Exit the application
        }
        else {
            std::cout << "Wrong Command!" << std::endl << std::endl; // Add two new lines
        }
    }

    return 0;
}

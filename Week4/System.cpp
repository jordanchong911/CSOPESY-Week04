#include "System.h"

void System::addGPU(const GPU& gpu) {
    gpus.push_back(gpu);
}

void System::addProcess(const Process& process) {
    processes.push_back(process);
}

void System::displaySystemInfo() const {
    std::cout << "| GPU Name                     | Fan     | Temp    | Power Usage/Cap   | Memory Usage |\n";
    std::cout << "-----------------------------------------------------------------------------------------------\n";

    for (const auto& gpu : gpus) {
        gpu.displayGPUInfo(); // Call the display method for GPU
    }

    std::cout << "\n| PID     | GPU     | Type    | Process Name                | GPU Memory Usage |\n";
    std::cout << "--------------------------------------------------------------------------------\n";

    for (const auto& process : processes) {
        process.displayProcessInfo(); // Call the display method for Process
    }
}

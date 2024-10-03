#include "Process.h"
#include <iostream>
#include <iomanip> // For std::setw

// Constructor implementation
Process::Process(int pid, const std::string& type, const std::string& name, const std::string& gpuMemoryUsage)
    : pid(pid), type(type), name(name), gpuMemoryUsage(gpuMemoryUsage) {}

// Method to display process information
void Process::displayProcessInfo() const {
    std::cout << "| " << std::setw(6) << pid
        << " | " << std::setw(5) << type
        << " | " << std::setw(5) << type
        << " | " << std::setw(30) << name
        << " | " << std::setw(20) << gpuMemoryUsage
        << " |\n";
}

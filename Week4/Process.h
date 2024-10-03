#ifndef PROCESS_H
#define PROCESS_H

#include <string>

class Process {
public:
    // Constructor
    Process(int pid, const std::string& type, const std::string& name, const std::string& gpuMemoryUsage);

    // Method to display process information
    void displayProcessInfo() const;

private:
    int pid;                     // Process ID
    std::string type;           // Type (e.g., C+G)
    std::string name;           // Process name
    std::string gpuMemoryUsage; // GPU memory usage
};

#endif // PROCESS_H

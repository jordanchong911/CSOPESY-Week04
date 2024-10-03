#ifndef SYSTEM_H
#define SYSTEM_H

#include "GPU.h"
#include "Process.h"
#include <vector>

class System {
public:
    void addGPU(const GPU& gpu);
    void addProcess(const Process& process);
    void displaySystemInfo() const;

private:
    std::vector<GPU> gpus;
    std::vector<Process> processes;
};

#endif // SYSTEM_H

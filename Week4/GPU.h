#ifndef GPU_H
#define GPU_H

#include <string>
#include <iomanip>
#include <iostream>

class GPU {
public:
    GPU(std::string name, std::string tccWddm, std::string busId, int fanSpeed, int temp, int powerUsage, int memoryUsage, int gpuUtil);
    void displayGPUInfo() const; // Method to display GPU info

private:
    std::string name;
    std::string tccWddm;
    std::string busId;
    int fanSpeed;
    int temp;
    int powerUsage;
    int memoryUsage;
    int gpuUtil;
};

#endif // GPU_H

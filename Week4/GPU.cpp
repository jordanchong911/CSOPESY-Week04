#include "GPU.h"

GPU::GPU(std::string name, std::string tccWddm, std::string busId, int fanSpeed, int temp, int powerUsage, int memoryUsage, int gpuUtil)
    : name(name), tccWddm(tccWddm), busId(busId), fanSpeed(fanSpeed), temp(temp), powerUsage(powerUsage), memoryUsage(memoryUsage), gpuUtil(gpuUtil) {}

void GPU::displayGPUInfo() const {
    std::cout << "| " << std::setw(28) << std::left << name
        << "| " << std::setw(7) << fanSpeed << "% "
        << "| " << std::setw(6) << temp << "C "
        << "| " << std::setw(15) << powerUsage << "W/180W "
        << "| " << std::setw(14) << memoryUsage << "MiB/8192MiB |\n";
}

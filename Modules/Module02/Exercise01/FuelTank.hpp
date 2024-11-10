#ifndef FUELTANK_H
#define FUELTANK_H
#include <string>
#include "Part.hpp"

using namespace std;

class FuelTank: public Part {
private:
    float capacity;
    float currentLevel;

public:
    FuelTank();
    FuelTank(const FuelTank& other);
    FuelTank& operator=(const FuelTank& other);
    ~FuelTank();

    float getCapacity();
    float getCurrentLevel();

    void print() override;
    void refuel(float quantity);
    void consumeFuel();
};

#endif
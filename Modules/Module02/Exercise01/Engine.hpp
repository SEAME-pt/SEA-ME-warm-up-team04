#ifndef ENGINE_H
#define ENGINE_H
#include <string>
#include "Part.hpp"

using namespace std;

enum class FuelType {
    Electric,
    Gasoline,
    Diesel
};

enum class OnOff {
    On,
    Off,
};

class Engine: public Part {
private:
    FuelType fuelType;
    double power;
    OnOff state = OnOff::Off;
    double fuelConsumption;


public:
    Engine(FuelType fuelType, double power, double fuelConsumption);
    Engine(const Engine& other);
    Engine& operator=(const Engine& other);
    ~Engine();

    FuelType getFuelType();
    double getPower();
    OnOff getState();
    double getFuelConsumption();

    void setState(OnOff newState);

    void print() override;
    void start();
    void accelerate();
    void stop();
};

#endif
#include "Engine.hpp"
#include <iostream>
#include <string>
using namespace std;

Engine::Engine(FuelType fuelType, double power, double fuelConsumption): fuelType(fuelType), power(power), fuelConsumption(fuelConsumption){}

Engine::Engine(const Engine &other)
{
    fuelType=other.fuelType;
    state=other.state;
    power=other.power;
    fuelConsumption=other.fuelConsumption;
}

Engine &Engine::operator=(const Engine &other)
{
    if (this != &other) {  
        fuelType=other.fuelType;
        state=other.state;
        power=other.power;
        fuelConsumption=other.fuelConsumption;
    }
    return *this;  
}

Engine::~Engine()
{
    cout << "Engine deleted." << endl;
}

FuelType Engine::getFuelType()
{
    return fuelType;
}

double Engine::getPower()
{
    return power;
}

OnOff Engine::getState()
{
    return state;
}

double Engine::getFuelConsumption()
{
    return fuelConsumption;
}

void Engine::setState(OnOff newState)
{
    state=newState;
}

void Engine::print()
{
    cout << "Engine part." << endl;
}

void Engine::start()
{
    setState(OnOff::On);
    cout << "Engine started." << endl;
}

void Engine::accelerate()
{
    cout << "Engine accelerated." << endl;
}

void Engine::stop()
{
    setState(OnOff::Off);
    cout << "Engine stopped." << endl;
}

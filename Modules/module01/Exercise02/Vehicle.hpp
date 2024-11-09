#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
using namespace std;

class Vehicle {

protected:
    bool isEngineRunning;
    string fuelType;

public:
    Vehicle(bool running, string fuelType) : isEngineRunning(running), fuelType(fuelType) {}

    virtual void startEngine() = 0;  
    virtual void stopEngine() = 0;   
    virtual void drive() = 0;        

    virtual ~Vehicle() {}
};

#endif
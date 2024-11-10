#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>
#include <string>
#include "Brake.hpp"
#include "ElectricalSystem.hpp"
#include "Engine.hpp"
#include "FuelTank.hpp"
#include "Wheel.hpp"
using namespace std;

class Vehicle {

protected:
    Brake* brakes_;
    ElectricalSystem* electricalSystem_;
    Engine* engine_;
    FuelTank* fuelTank_;
    Wheel* wheels_;

public:
    Vehicle();
    Vehicle(const Vehicle& other);
    Vehicle& operator=(const Vehicle& other);

    virtual void printParts() = 0;

    virtual void startEngine() = 0;  
    virtual void stopEngine() = 0;   
    virtual void drive() = 0;        

    virtual ~Vehicle() {}
};

#endif
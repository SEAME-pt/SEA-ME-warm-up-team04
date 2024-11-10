#include <iostream>
#include <string>
#include "Brake.hpp"
#include "ElectricalSystem.hpp"
#include "Engine.hpp"
#include "FuelTank.hpp"
#include "Wheel.hpp"
#include "Vehicle.hpp"
using namespace std;

Vehicle::Vehicle(){
    brakes_ = new Brake[4]{Brake(BrakeType::ABS), Brake(BrakeType::ABS), Brake(BrakeType::ABS), Brake(BrakeType::ABS)};
    electricalSystem_ = new ElectricalSystem();
    engine_ = new Engine(FuelType::Gasoline, 100, 10);
    fuelTank_ = new FuelTank();
    wheels_ = new Wheel[4]{Wheel(WheelType::Radial,"205/55R16",32),Wheel(WheelType::Radial,"205/55R16",32),Wheel(WheelType::Radial,"205/55R16",32),Wheel(WheelType::Radial,"205/55R16",32)};
}

Vehicle::Vehicle(const Vehicle &other)
{
    electricalSystem_=other.electricalSystem_;
    engine_=other.engine_;
    fuelTank_=other.fuelTank_;

    for (int i = 0; i < 4; ++i) {
        brakes_[i] = other.brakes_[i];
        wheels_[i] = other.wheels_[i];
    }
}

Vehicle &Vehicle::operator=(const Vehicle &other)
{
    if (this != &other) {  
        electricalSystem_=other.electricalSystem_;
        engine_=other.engine_;
        fuelTank_=other.fuelTank_;

        for (int i = 0; i < 4; ++i) {
            brakes_[i] = other.brakes_[i];
            wheels_[i] = other.wheels_[i];
        }
    }
    return *this; 
}

#ifndef CAR_H
#define CAR_H
#include "Vehicle.hpp"
#include <iostream>
#include <string>
using namespace std;

class Car : public Vehicle {
private:
    string make;
    string model;
    int year;

public:
    Car(string make, string model, int year);
    Car(const Car& other);
    Car& operator=(const Car& other);
    ~Car();

    void startEngine() override;
    void stopEngine() override;
    void drive() override;
    void printParts() override;

    string getMake();
    string getModel();
    int getYear();
    ElectricalSystem* getElectricalSystem();
    Brake* getBrakes();
    Wheel* getWheels();
    FuelTank* getFuelTank();
};

#endif
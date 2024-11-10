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

    virtual ~Car();  

    void startEngine() override;
    void stopEngine() override;
    void drive() override;

    string getMake();
    string getModel();
    int getYear();
};

#endif
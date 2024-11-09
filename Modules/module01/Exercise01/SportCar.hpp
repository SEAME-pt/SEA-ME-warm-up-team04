#ifndef SPORTCAR_H
#define SPORTCAR_H
#include <iostream>
#include <string>
#include "Car.hpp"
using namespace std;

class SportCar : public Car {
    private:
        int topSpeed;


    public:
        SportCar(string make, string model, int year, int topSpeed);
        void drive() override;
        ~SportCar();
};

#endif
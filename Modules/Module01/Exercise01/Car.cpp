#include "Car.hpp"
#include <cstring>

Car::Car(string make,string model, int year): make(make), model(model), year(year){
    cout << "Car constructed." << endl;
}

void Car::drive() {
    cout << "Driving " + make + " " + model + "  " << year + " edition." << endl;
}

Car::~Car() {
    cout << "Car destroyed." << endl;  
}

string Car::getMake()
{
    return make;
}

string Car::getModel()
{
    return model;
}

int Car::getYear()
{
    return year;
};
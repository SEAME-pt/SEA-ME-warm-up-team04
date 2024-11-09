#include "Car.hpp"
#include <cstring>

Car::Car(string make, string model, int year): Vehicle(false, "hybrid"), make(make), model(model), year(year) {
    cout << "Car constructed." << endl;
}

Car::~Car() {
    cout << "Car destroyed." << endl;  
}

void Car::startEngine() {
    isEngineRunning = true;
    cout << "Starting the engine of the " << make << " " << model << "..." << endl;
}

void Car::stopEngine() {
    isEngineRunning = false;
    cout << "Stopping the engine of the " << make << " " << model << "..." << endl;
}

void Car::drive() {
    cout << "Driving " << make << " " << model << " " << year << " edition." << endl;
}

string Car::getMake() {
    return make;
}

string Car::getModel() {
    return model;
}

int Car::getYear() {
    return year;
}
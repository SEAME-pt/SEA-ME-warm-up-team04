#include "Car.hpp"
#include <cstring>

Car::Car(string make, string model, int year) {
    brakes_ = new Brake[4]{Brake(BrakeType::ABS), Brake(BrakeType::ABS), Brake(BrakeType::ABS), Brake(BrakeType::ABS)};
    electricalSystem_ = new ElectricalSystem();
    engine_ = new Engine(FuelType::Gasoline, 100, 10);
    fuelTank_ = new FuelTank();
    wheels_ = new Wheel[4]{Wheel(WheelType::Radial,"205/55R16",32),Wheel(WheelType::Radial,"205/55R16",32),Wheel(WheelType::Radial,"205/55R16",32),Wheel(WheelType::Radial,"205/55R16",32)};
    this->make = make;
    this->model = model;
    this->year = year;
    cout << "Car constructed." << endl;
}

Car::Car(const Car &other)
{
    electricalSystem_=other.electricalSystem_;
    engine_=other.engine_;
    fuelTank_=other.fuelTank_;
    make=other.make;
    model=other.model;
    year=year;

    for (int i = 0; i < 4; ++i) {
        brakes_[i] = other.brakes_[i];
        wheels_[i] = other.wheels_[i];
    }
}

Car &Car::operator=(const Car &other)
{
    if (this != &other) {  
        electricalSystem_=other.electricalSystem_;
        engine_=other.engine_;
        fuelTank_=other.fuelTank_;
        make=other.make;
        model=other.model;
        year=year;

        for (int i = 0; i < 4; ++i) {
            brakes_[i] = other.brakes_[i];
            wheels_[i] = other.wheels_[i];
        }
    }
    return *this; 
}

Car::~Car() {
    delete[] brakes_; 
    delete[] wheels_; 
    cout << "Car destroyed." << endl;  
}

void Car::startEngine() {
    engine_->start();
    cout << "Starting the engine of the " << make << " " << model << "..." << endl;
}

void Car::stopEngine() {
    engine_->stop();
    cout << "Stopping the engine of the " << make << " " << model << "..." << endl;
}

void Car::drive() {
    cout << "Driving " << getMake() << " " << getModel() << " " << getYear() << " edition." << endl;
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

void Car::printParts()
{
    engine_->print();

    for (int i = 0; i < 4; ++i) {
        brakes_[i].print();  
    }

    for (int i = 0; i < 4; ++i) {
        wheels_[i].print();  
    }

    electricalSystem_->print(); 

    fuelTank_->print();
}

ElectricalSystem* Car::getElectricalSystem()
{
    return electricalSystem_;
}

Brake *Car::getBrakes()
{
    return brakes_;
}

Wheel *Car::getWheels()
{
    return wheels_;
}

FuelTank *Car::getFuelTank()
{
    return fuelTank_;
}

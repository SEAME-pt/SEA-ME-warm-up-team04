#include "Car.hpp"
#include <cstring>

Car::Car(string n, double s)
{
    name=n;
    speed=s;
}

Car::Car(const Car& other)
{
    name=other.name;
    speed=other.speed;
}

Car &Car::operator=(const Car &other)
{
    if (this != &other) {  // Previne auto-atribuição
        name = other.name;  // Copia o nome
        speed = other.speed; // Copia a velocidade
    }
    return *this;
}

Car::~Car(){
    cout << "Car deleted." << endl;
}

string Car::getName()
{
    return name;
}

double Car::getSpeed()
{
    return speed;
}

void Car::showCar(){
    cout << "Name: " << getName() << ", Speed: " << speed << " km/h\n";
}
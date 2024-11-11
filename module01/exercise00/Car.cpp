#include "Car.h"
#include <utility>

Car::Car(std::string name, int speed): c_name(std::move(name)), c_speed(speed) {}

Car::Car(const Car& car): c_name(car.c_name), c_speed(car.c_speed) {}

Car& Car::operator = (const Car& o) {
    if(this != &o) {
        c_name = o.c_name;
        c_speed = o.c_speed;
    }
    return *this;
}

std::string Car::getCarName() const {
    return c_name;
}

int Car::getSpeed() const {
    return c_speed;
}

void Car::setName(std::string name) {
    c_name = std::move(name);
}

void Car::setSpeed(int speed) {
    c_speed = speed;
}
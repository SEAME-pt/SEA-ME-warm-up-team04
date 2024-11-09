#include "Car.hpp"
#include <cstring>

int main() {
    Car myCar("bmw", 200.0);
    myCar.showCar();

    Car x = myCar;
    x.showCar();

}
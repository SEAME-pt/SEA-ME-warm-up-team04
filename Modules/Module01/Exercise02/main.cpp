#include "SportCar.hpp"
#include "Car.hpp"
#include <cstring>

int main() {
    Vehicle* myCar = new Car("BMW", "Mini", 2024);
    Vehicle* mySportCar = new SportCar("BMW", "M850i", 2024, 245);

    myCar->startEngine();
    myCar->drive();
    myCar->stopEngine();

    mySportCar->startEngine();
    mySportCar->drive();
    mySportCar->stopEngine();

    delete myCar;        
    delete mySportCar;   

    return 0;
}
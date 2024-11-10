#include "Car.hpp"
#include <cstring>
#include <iostream>

int main() {
    Car* myCar = new Car("BMW", "Mini", 2024);

    std::cout << "Car make: " << myCar->getMake() << std::endl;
    std::cout << "Car model: " << myCar->getModel() << std::endl;
    std::cout << "Car year: " << myCar->getYear() << std::endl;

    myCar->startEngine();
    myCar->stopEngine();

    std::cout << "\nPrinting car parts details:" << std::endl;
    myCar->printParts();  

    std::cout << "\nTesting ElectricalSystem:" << std::endl;
    myCar->getElectricalSystem()->checkBattery();
    myCar->getElectricalSystem()->useBattery(); 
    myCar->getElectricalSystem()->checkBattery();

    std::cout << "\nTesting Brakes (from Car):" << std::endl;
    for (int i = 0; i < 4; ++i) {
        myCar->getBrakes()[i].engage();
        myCar->getBrakes()[i].release();
    }

    std::cout << "\nTesting Wheels (from Car):" << std::endl;
    for (int i = 0; i < 4; ++i) {
        myCar->getWheels()[i].inflate();
        myCar->getWheels()[i].rotate();
    }

    std::cout << "\nTesting FuelTank (from Car):" << std::endl;
    myCar->getFuelTank()->refuel(20); 
    myCar->getFuelTank()->consumeFuel();
    myCar->getFuelTank()->consumeFuel();

    delete myCar; 

    return 0;
}
#include "SportCar.hpp"
#include "Car.hpp"

SportCar::SportCar(string make, string model, int year, int topSpeed)
    : Car(make, model, year), topSpeed(topSpeed) {
    cout << "SportCar constructed." << endl;
}

void SportCar::drive() {
    cout << "Driving " << getMake() << " " << getModel() << " " << getYear() << " edition, with top speed " << topSpeed << "Km/h" << endl;
}

SportCar::~SportCar() {
    cout << "SportCar destroyed." << endl;
}
#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string name;
        double speed;


    public:
        Car(string n, double s);

        Car(const Car& other);

        Car& operator=(const Car& other);

        ~Car();

        string getName();

        double getSpeed();

        void showCar();
};

#endif
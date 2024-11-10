#ifndef CAR_H
#define CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car{
    private:
        string make;
        string model;
        int year;

    public:
        Car(string make, string model, int year);

        virtual ~Car(); 

        virtual void drive();

        string getMake();
        string getModel();
        int getYear();
};

#endif
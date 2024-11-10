#include "FuelTank.hpp"
#include <iostream>

FuelTank::FuelTank(): capacity(100), currentLevel(100){}

FuelTank::FuelTank(const FuelTank &other)
{
    capacity=other.capacity;
    currentLevel=other.currentLevel;
}

FuelTank &FuelTank::operator=(const FuelTank &other)
{
    if (this != &other) {  
        capacity=other.capacity;
        currentLevel=other.currentLevel;
    }
    return *this; 
}

FuelTank::~FuelTank()
{
    cout << "FuelTank deleted." << endl;
}

float FuelTank::getCapacity()
{
    return capacity;
}

float FuelTank::getCurrentLevel()
{
    return currentLevel;
}

void FuelTank::print()
{
    cout << "FuelTank part." << endl;
}

void FuelTank::refuel(float quantity)
{
    float total = currentLevel + quantity;
    if(total >= capacity){
        currentLevel=100;
    } else {
        currentLevel=total;
    }
    cout << "FuelTank current level: " << currentLevel << " l." << endl;
}

void FuelTank::consumeFuel()
{
    currentLevel-=1;
}

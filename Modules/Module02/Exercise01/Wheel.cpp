#include "Wheel.hpp"
#include <iostream>

Wheel::Wheel(WheelType type, string size, double pressure): type(type), size(size), pressure(pressure){}

Wheel::Wheel(const Wheel &other)
{
    type=other.type;
    size=other.size;
    pressure=other.pressure;
}

Wheel &Wheel::operator=(const Wheel &other)
{
    if (this != &other) {  
        type=other.type;
        size=other.size;
        pressure=other.pressure;
    }
    return *this; 
}

Wheel::~Wheel()
{
    cout << "Wheel deleted." << endl;
}

string Wheel::getWhellsType()
{
    return WheelTypeToString(type);
}

string Wheel::getSize()
{
    return size;
}

double Wheel::getPressure()
{
    return pressure;
}

void Wheel::print()
{
    cout << "Wheel part." << endl;
}

void Wheel::inflate()
{
    pressure+=1;
}

void Wheel::rotate()
{
    cout << "Wheel rotated." << endl;
}

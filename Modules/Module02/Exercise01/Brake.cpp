#include "Brake.hpp"
#include <iostream>
using namespace std;

Brake::Brake(BrakeType type): type(type), state(Braketate::Released){}

Brake::Brake(const Brake &other)
{
    type=other.type;
    state=other.state;
}

Brake &Brake::operator=(const Brake &other)
{
    if (this != &other) {  
        type=other.type;
        state=other.state;
    }
    return *this; 
}

Brake::~Brake()
{
    cout << "Brake deleted." << endl;
}

BrakeType Brake::getType()
{
    return type;
}

Braketate Brake::getState()
{
    return state;
}

void Brake::setBraketate(Braketate newState)
{
    state=newState;
}

void Brake::print()
{
    cout << "Brake part." << endl;
}

void Brake::engage()
{
    state=Braketate::Engaged;
    cout << "Brake engaged." << endl;
}

void Brake::release()
{
    state=Braketate::Released;
    cout << "Brake released." << endl;
}

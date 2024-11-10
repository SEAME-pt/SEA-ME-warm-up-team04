#include "ElectricalSystem.hpp"
#include <iostream>

ElectricalSystem::ElectricalSystem(): batteryState(BatteryState::Charged), chargeLevel(100){}

ElectricalSystem::ElectricalSystem(const ElectricalSystem &other)
{
    batteryState=other.batteryState;
    chargeLevel=other.chargeLevel;
}

ElectricalSystem &ElectricalSystem::operator=(const ElectricalSystem &other)
{
    if (this != &other) {  
        batteryState=other.batteryState;
        chargeLevel=other.chargeLevel;
    }
    return *this; 
}

ElectricalSystem::~ElectricalSystem()
{
    cout << "ElectricalSystem deleted." << endl;
}

string ElectricalSystem::getBatteryState()
{
    return BatteryStateToString(batteryState);
}

int ElectricalSystem::getChargeLevel()
{
    return chargeLevel;
}

void ElectricalSystem::useBattery()
{
    chargeLevel-=1;
}

void ElectricalSystem::print()
{
    cout << "ElectricalSystem part." << endl;
}

void ElectricalSystem::checkBattery()
{
    cout << "Battery " << getBatteryState() << "." << "Battery level: " << getChargeLevel() << endl;
}

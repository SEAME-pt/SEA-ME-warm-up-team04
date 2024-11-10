#ifndef ELECTRICALSYSTEM_H
#define ELECTRICALSYSTEM_H
#include <string>
#include "Part.hpp"

using namespace std;

enum class BatteryState {
    Charged,
    Uncharged,
};

inline string BatteryStateToString(BatteryState batteryState) {
    switch (batteryState) {
        case BatteryState::Charged: return "Charged";
        case BatteryState::Uncharged: return "Uncharged";
        default: return "Unknown";
    }
}

class ElectricalSystem: public Part {
private:
    BatteryState batteryState;
    int chargeLevel;

public:
    ElectricalSystem();
    ElectricalSystem(const ElectricalSystem& other);
    ElectricalSystem& operator=(const ElectricalSystem& other);
    ~ElectricalSystem();

    string getBatteryState();
    int getChargeLevel();

    void useBattery();

    void print() override;
    void checkBattery();

};

#endif
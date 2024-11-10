#ifndef WHEEL_H
#define WHEEL_H
#include <string>
#include "Part.hpp"

using namespace std;

enum class WheelType {
    Radial,
    Diagonal,
};

inline string WheelTypeToString(WheelType wheelType) {
    switch (wheelType) {
        case WheelType::Radial: return "Radial";
        case WheelType::Diagonal: return "Diagonal";
        default: return "Unknown";
    }
}


class Wheel: public Part {
private:
    WheelType type;
    string size;
    double pressure;

public:
    Wheel(WheelType type, string size, double pressure);
    Wheel(const Wheel& other);
    Wheel& operator=(const Wheel& other);
    ~Wheel();

    string getWhellsType();
    string getSize();
    double getPressure();

    void print() override;
    void inflate();
    void rotate();
};

#endif
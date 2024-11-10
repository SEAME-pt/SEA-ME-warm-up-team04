#ifndef BRAKE_H
#define BRAKE_H
#include <string>
#include "Part.hpp"

using namespace std;

enum class BrakeType {
    Disc,
    Drum,
    ABS
};

enum class Braketate {
    Engaged,
    Released,
};

class Brake: public Part {
private:
    BrakeType type;
    Braketate state;

public:
    Brake(BrakeType type);
    Brake(const Brake& other);
    Brake& operator=(const Brake& other);
    ~Brake();

    BrakeType getType();
    Braketate getState();

    void setBraketate(Braketate newState);

    void print() override;
    void engage();
    void release();
};

#endif
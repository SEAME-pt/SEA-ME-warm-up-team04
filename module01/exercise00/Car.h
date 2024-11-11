#ifndef SEA_ME_WARM_UP_CAR_H
#define SEA_ME_WARM_UP_CAR_H

#include <string>

class Car {
    std::string c_name;
    int c_speed;
public:
    Car() = delete;
    Car(std::string  name, int speed); // constructor
    Car(const Car&); // copy constructor
    ~Car() = default; // destructor
    Car& operator = (const Car&);  // copy/assignment operator
    [[nodiscard]] std::string getCarName() const;
    [[nodiscard]] int getSpeed() const;
    void setName(std::string);
    void setSpeed(int);
};


#endif //SEA_ME_WARM_UP_CAR_H

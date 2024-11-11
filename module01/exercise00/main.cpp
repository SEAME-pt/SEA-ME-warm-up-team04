#include <iostream>
#include "Car.h"
int main()
{
    Car car {"BMW", 200};
    std::cout << "Hello, your car " << car.getCarName() << " is currently at " << car.getSpeed() << " km/h\n";

    Car car2 = car;
    car2.setSpeed(150);
    std::cout << "Hello, your cloned car " << car2.getCarName() << " is currently at " << car2.getSpeed() << " km/h\n";

    Car car3 = car2;
    car3.setName("Mercedes");
    std::cout << "Hello, your cloned car " << car3.getCarName() << " is currently at " << car3.getSpeed() << " km/h\n";

    car.setSpeed(10);
    std::cout << "Hello, your car " << car.getCarName() << " is currently at " << car.getSpeed() << " km/h\n";

    return 0;
}

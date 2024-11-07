// if carh is not defined then define it with this code
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

// Garret Karns
// CIS 1202 101
// November 7th, 2024

// car class with data
class Car : public Vehicle {
private:
    int numberOfDoors;

public:
    Car(std::string manufacturer = "", int yearBuilt = 0, int numberOfDoors = 0);
    int getNumberOfDoors() const;
    void setNumberOfDoors(int numberOfDoors);
    void displayInfo() const override;
};

#endif

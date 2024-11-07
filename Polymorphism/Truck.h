// if truckh is not defined then define it with this code
#ifndef TRUCK_H
#define TRUCK_H

#include "Vehicle.h"

// Garret Karns
// CIS 1202 101
// November 7th, 2024

// truck class with data
class Truck : public Vehicle {
private:
    int towingCapacity;

public:
    Truck(std::string manufacturer = "", int yearBuilt = 0, int towingCapacity = 0);
    int getTowingCapacity() const;
    void setTowingCapacity(int towingCapacity);
    void displayInfo() const override;
};

#endif
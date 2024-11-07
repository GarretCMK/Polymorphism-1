// ONLY trucks have towing capacity
#include <iostream>
#include "Truck.h"

// Garret Karns
// CIS 1202 101
// November 7th, 2024

Truck::Truck(std::string manufacturer, int yearBuilt, int towingCapacity)
    : Vehicle(manufacturer, yearBuilt), towingCapacity(towingCapacity) {}

int Truck::getTowingCapacity() const {
    return towingCapacity;
}

void Truck::setTowingCapacity(int towingCapacity) {
    this->towingCapacity = towingCapacity;
}

void Truck::displayInfo() const {
    Vehicle::displayInfo();
    std::cout << "Towing Capacity: " << towingCapacity << " lbs" << std::endl;
}

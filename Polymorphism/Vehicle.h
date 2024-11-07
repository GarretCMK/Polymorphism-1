// if vehicleh is not defined then make this code define it
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

// Garret Karns
// CIS 1202 101
// November 7th, 2024

// vehicle class with all info
class Vehicle {
protected:
    std::string manufacturer;
    int yearBuilt;

public:
    Vehicle(std::string manufacturer = "", int yearBuilt = 0);
    std::string getManufacturer() const;
    int getYearBuilt() const;
    void setManufacturer(const std::string& manufacturer);
    void setYearBuilt(int yearBuilt);
    virtual void displayInfo() const;
};

#endif

#include <iostream>
#include <sstream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

// Garret Karns
// CIS 1202 101
// November 7th, 2024

// i had the most random problems with cin and I was clearing the input buffer but it would still skip to the end
// of the program so I ended up just taking the line and converting to integers

// main function
int main() {
    std::string manufacturer, input;
    int yearBuilt, numberOfDoors, towingCapacity;

    // vehicle, always has manufacturer and year
    std::cout << "Enter the manufacturer for the vehicle: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter the year built for the vehicle: ";
    std::getline(std::cin, input);
    std::istringstream(input) >> yearBuilt; // convert string to int

    Vehicle vehicle(manufacturer, yearBuilt);
    std::cout << std::endl << "Vehicle Information:" << std::endl;
    vehicle.displayInfo();

    // car, always include number of doors
    std::cout << std::endl << "Enter the manufacturer for the car: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter the year built for the car: ";
    std::getline(std::cin, input);
    std::istringstream(input) >> yearBuilt;
    std::cout << "Enter the number of doors for the car: ";
    std::getline(std::cin, input);
    std::istringstream(input) >> numberOfDoors;

    Car car(manufacturer, yearBuilt, numberOfDoors);
    std::cout << std::endl << "Car Information:" << std::endl;
    car.displayInfo();

    // truck, always includes towing capacity
    std::cout << std::endl << "Enter the manufacturer for the truck: ";
    std::getline(std::cin, manufacturer);
    std::cout << "Enter the year built for the truck: ";
    std::getline(std::cin, input);
    std::istringstream(input) >> yearBuilt;
    std::cout << "Enter the towing capacity for the truck: ";
    std::getline(std::cin, input);
    std::istringstream(input) >> towingCapacity;

    Truck truck(manufacturer, yearBuilt, towingCapacity);
    std::cout << std::endl << "Truck Information:" << std::endl;
    truck.displayInfo();

    return 0;
}

#include "Car.h"
#include <iostream>

void Car::Print()
{
    std::cout << "Car info:" << std::endl;
    std::cout << "   Make: " << make << std::endl;
    std::cout << "   Model: " << model << std::endl;
    std::cout << "   Doors: " << doors << std::endl;
    std::cout << "   MPG: " << mpg << std::endl;
    std::cout << "   Mileage: " << mileage << std::endl;
    std::cout << "   Petrol: " << petrol << std::endl;
    std::cout << std::endl;
}

void Car::Drive(float milesToDrive)
{
    std::cout << make << " " << model << " driving " << milesToDrive << " miles." << std::endl;
    // Goals: Update mileage and petrol level based on how far we drove
    
    // Mileage: Just add how far we drove to the car's mileage
    mileage += milesToDrive;

    // Fuel level: Calculate fuel used and subtract that from the car's fuel level
    float fuelUsed = milesToDrive / mpg;
    petrol -= fuelUsed;
}

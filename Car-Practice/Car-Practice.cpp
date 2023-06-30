// Car-Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Car.h"

void Print(Car toPrint)
{
    std::cout << "Car info:" << std::endl;
    std::cout << "   Make: " << toPrint.make << std::endl;
    std::cout << "   Model: " << toPrint.model << std::endl;
    std::cout << "   Doors: " << toPrint.doors << std::endl;
    std::cout << "   MPG: " << toPrint.mpg << std::endl;
    std::cout << "   Mileage: " << toPrint.mileage << std::endl;
    std::cout << "   Petrol: " << toPrint.petrol << std::endl;
    std::cout << std::endl;
}


int main()
{
    
    Car car1;
    car1.make = "Geo";
    car1.model = "Metro";
    car1.doors = 3;
    car1.mpg = 50.0f;
    car1.mileage = 60000;
    car1.petrol = 10.0f;


    Car car2;
    car2.make = "Ford";
    car2.model = "Escort";
    car2.doors = 5;
    car2.mpg = 30.0f;
    car2.mileage = 20000;
    car2.petrol = 15.0f;

    Car car3;
    car3.make = "Honda";
    car3.model = "Jazz";
    car3.doors = 5;
    car3.mpg = 50.0f;
    car3.mileage = 3000;
    car3.petrol = 10.0f;

    std::vector<std::string> testVector;

    testVector.push_back("test");

    car1.Print();
    car2.Print();
    car3.Print();

    car1.Drive(10);
    car2.Drive(20);
    car3.Drive(30);

    car1.Print();
    car2.Print();
    car3.Print();

}

#pragma once

#include <string>
#include <vector>

class Car
{
public:

	void Print();
	void Drive(float milesToDrive);

	// Settings
	std::string make;
	std::string model;
	int doors;
	float mpg;

	// state
	float mileage;
	float petrol;

};


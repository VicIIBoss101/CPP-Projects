#pragma once
#include <string>

class Car
{
private:
	std::string brand;
	std::string model;
	int year;
public:
	Car(const std::string& b, const std::string& m, int y);
	std::string getBrand() const;
	std::string getModel() const;
	int getYear() const;
};
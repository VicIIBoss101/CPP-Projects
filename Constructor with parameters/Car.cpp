#include "Car.h"
#include <iostream>

Car::Car(const std::string& b, const std::string& m, int y) : brand(b), model(m), year(y) {}
std::string Car::getBrand()const { return brand; }
std::string Car::getModel() const { return model; }
int Car::getYear() const { return year; }

#include <iostream>
#include "Car.h"
#include <cstdio>
#include <print>
using namespace std;
int main()
{
	Car c1("bmw", "x5", 2015);
	//printf("Brand: %s , model: %s , year: %d" , c1.getBrand(), c1.getModel(), c1.getYear());
	std::print("brand {} model {} year: {}", c1.getBrand(), c1.getModel(), c1.getYear());
	return 0;
}

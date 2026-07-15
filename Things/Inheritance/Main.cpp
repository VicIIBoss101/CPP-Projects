#include <iostream>
#include <string>
using namespace std;
class Vehicle {
public :
	string brand = "nissan";
	void honk() {
		cout << "tutu \n";
	}

};
class Car : public Vehicle {
public:
	string model = "gtr";
};
int main()
{
	Car c1;
	c1.honk();
	cout << c1.brand + " " + c1.model;
	return 0;
}

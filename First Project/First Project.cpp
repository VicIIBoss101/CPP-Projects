#include <iostream>
#include <string>
using namespace std;
class MyClass {
public:
	int myNum;
	string myString;
};
class Car {
public:
	string brand;
	string model;
	int year;
};
int main()
{
	MyClass obj;
	obj.myNum = 10;
	obj.myString = "test";
	cout << obj.myString << endl;
	//===================
	Car c1;
	c1.brand = "toyota";
	c1.model = "corola";
	c1.year = 1991;
	cout << c1.brand << "\n" << c1.model << "\n" << c1.year;
	return 0;
}
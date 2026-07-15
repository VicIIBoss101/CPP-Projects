#include <iostream>
#include <string>
using namespace std;
class MyClass {
public:
	void myMeth();
};
void MyClass::myMeth() {
	cout << "hello im outside the class" << endl;
}
class MyClass2 {
public:
	int speed(int maxSpeed);
};
int MyClass2::speed(int maxSpeed) {
	return maxSpeed;
}
int main()
{
	MyClass obj;
	//obj.myMeth();
	MyClass2 obj2;
	cout << obj2.speed(200);
	return 0;
}

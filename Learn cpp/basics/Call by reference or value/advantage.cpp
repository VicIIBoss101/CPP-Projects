// call by reference can retern more than " 1 " thing in the same time
#include <iostream>
#include <print>
using namespace std;

int sumN(int& num1, int& num2, int& sum) {
	num1 = 20;
	num2 = 30;
	return sum = num1 + num2;
}

int main() {
	int num1 = 5, num2 = 8, sum;
	// now we have 3 vars 
	cout << "num1 = " << num1 << " num2 = " << num2 << "\n";
	sumN(num1, num2, sum);
	cout << "now!!" << "\n" << "num1 = " << num1 << " num2 = " << num2 << " the sum = " << sum;
	return 0;
}
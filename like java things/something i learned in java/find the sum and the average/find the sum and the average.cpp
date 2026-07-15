#include <iostream>

using namespace std;
int main() {
	cout << " How many number do you want to enter: ";
	int times;
	int number;
	int sum = 0;
	cin >> times;
	for (int i = 0; i < times; i++) {
		cout << "\nenter a number: ";
		cin >> number;
		sum += number;
	}
	double avg = (double)sum / times;
	cout << "\nSum = " << sum << "\naverage = " << avg << endl;
}

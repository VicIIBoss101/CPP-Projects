#include <iostream>

using namespace std;

int main() {
	cout << "Enter a grade: ";
	int grade;
	cin >> grade;
	if (grade >= 90) {
		cout << "\nA";
	}
	else if (grade >= 80) {
		cout << "\nB";
	}
	else if (grade >= 70) {
		cout << "\nC";
	}
	else if (grade >= 60) {
		cout << "\nD";
	}
	else if (grade >= 50) {
		cout << "\nE";
	}
	else {
		cout << "\nF";
	}
}
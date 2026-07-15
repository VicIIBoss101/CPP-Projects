#include <iostream>
using namespace std;
int main() {
	cout << "Enter a age: ";
	int age;
	cin >> age;
	if (age >= 18) {
		cout << "\nyou can vote " << endl;
	}
	else {
		cout << "\nyou cannot vote you have to wait " << (18 - age) << " years !" << endl;
	}
}
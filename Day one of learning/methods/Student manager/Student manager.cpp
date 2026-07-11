#include <iostream>
#include <string>
using namespace std;
void showGrades(string names[], int grade[]);
int main() {
	int listLength;
	cout << "How many names do you want to enter: ";
	cin >> listLength;
	string* names = new string[listLength];
	int* grade = new int[listLength];
	for (int i = 0; i < listLength; i++) {
		cout << " Enter the name: ";
		cin >> names[i];
		cout << "\Enter the grade: ";
		cin >> grade[i];
	}
	for (int i = 0; i < listLength; i++) {
		cout << (i + 1) << ". " << names[i] << " grade : " << grade[i] << endl;
	}
}
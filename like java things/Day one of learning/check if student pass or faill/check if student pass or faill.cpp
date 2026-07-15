#include <iostream>
#include <string>

using namespace std;

void addGrade(string names[], int grades[], int listLength) {
	for (int i = 0; i < listLength; i++) {
		cout << "\n" << "enter a name: ";
		cin >> names[i];
		cout << "\n" << "enter grade: ";
		cin >> grades[i];
	}
}
void showGrades(string names[], int grades[], int listLength) {
	for (int i = 0; i < listLength; i++) {
		cout << "\n" << (i + 1) << ". " << names[i] << " " << grades[i];
	}
}
void checkPassOrFail(string names[], int grades[], int listLength) {
	for (int i = 0; i < listLength; i++) {
		if (grades[i] < 50) {
			cout << "\n" << names[i] << " fail";
		}
		else {
			cout << "\n" << names[i] << " pass";
		}
	}
}

int main() {

	int choice;
	int listLength = 0;
	string* names = nullptr;
	int* grades = nullptr;

	while (true) {
		cout << "\n------ Student System ------";
		cout << "\n1. enter grades \n2. Show grade list \n3. Check if student pass of fail \n4. exit";
		cout << "\nEnter your choice: ";
		cin >> choice;

		switch (choice) {

		case 1:
			cout << "\nHow many names do you want to enter: ";
			cin >> listLength;
			// (Re)allocate arrays with the requested size
			delete[] names;
			delete[] grades;
			names = new string[listLength];
			grades = new int[listLength];
			addGrade(names, grades , listLength);
			break;

		case 2:
			if (listLength > 0) showGrades(names, grades, listLength);
			else cout << "\nNo grades entered yet.";
			break;

		case 3:
			if (listLength > 0) {
				checkPassOrFail(names, grades, listLength);

			}else {
				cout << "\nNo grades entered yet.";
			}
			break;

		case 4 :
			cout << "\n" << "welcome to the system !!";
			delete[] names;
			delete[] grades;
			return 0;

		default:
			cout << "\n" << "Wrong choice !!";

		}
	}
}

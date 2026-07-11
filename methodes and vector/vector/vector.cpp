#include <vector>
#include <iostream>
#include <string>
using namespace std;

vector<string> students;
vector<int> grades;

void addStudents() {
	cout << "=================" << endl;
	while (true) {
		cout << "Do you want to add student ? Y / N : ";
		string decide;
		string name;
		int grade;
		cin >> decide;
		cin.ignore();

		if (decide == "n" || decide == "no" || decide == "N" || decide == "NO") {
			break;
		}
		else {
			cout << "\nenter student name: ";
			getline(cin, name);
			students.push_back(name);
			cout << "\nenter student grade: ";
			cin >> grade;
			grades.push_back(grade);
		}
	}
}

void showStudent() {
	cout << "=============" << endl;
	if (students.empty() || grades.empty()) {
		cout << "One of th listes are empty" << endl;
	}
	else {
		for (int i = 0; i < students.size(); i++) {
			cout << (i + 1) << ". " << students[i] << " Grade: " << grades[i] << endl;
		}
	}
	cout << "=================" << endl;
}

void studentState() {
	cout << "============" << endl;

	if (students.empty() || grades.empty()) {
		cout << "One of the listes are empty" << endl;
	} else {
		for (int i = 0; i < students.size(); i++) {
			if (grades[i] >= 50) {
				cout << students[i] << " pass" << endl;
			}
			else {
				cout << students[i] << " fail" << endl;
			}
		}
	}
	cout << "================" << endl;
}

int main() {

	struct {
		int choice;

	} mainMenu;

	// create an instance of the struct so we can store the user's choice
	//mainMenu menu{};

	cout << "---- Student System ----" << endl;
	while (true) {

		cout << "1. Add students to the system" << endl;
		cout << "2. Show students in the system" << endl;
		cout << "3. Check Students state " << endl;
		cout << "4. close the System" << endl;
		cout << "Enter your choice: ";

		cin >> mainMenu.choice;

		switch (mainMenu.choice) {
		case 1:
			addStudents();
			break;

		case 2:
			showStudent();
			break;

		case 3: 
			studentState();
			break;

		case 4:
			cout << "Shuting down the system" << endl;
			return 0;

		default: 
			cout << "wrong choice" << endl;
		}
	}
	
}
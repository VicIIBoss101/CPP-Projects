#include <iostream>
#include <string>
#include <vector>
#include <print>
using namespace std;

vector <string> student;
vector <int> studentGrade;
void addingStudent();
void showingStudents();
void checkStudentStatus();

int main() {
	short int decide;
	while (true) {
		std::print("===================== \nWelcome to the student system\n==============");
		std::print("\n1. {}\n2. {}\n3. {}\n4. {}\n{} ", "add Student", "Show Student", "Check Student Status", "exit", "Enter your choice:");
		cin >> decide;
		cin.ignore();
		switch (decide) {
		case 1:
			addingStudent();
			break;
		case 2:
			showingStudents();
			break;
		case 3:
			checkStudentStatus();
			break;
		case 4:
			return 0;
		default:
			std::print("\n{}\n", "Wrong choice try again");
			break;
		}
	}
}
void addingStudent() {
	bool adding = true;
	string name;
	short int grade;
	short int decide;
	while (adding) {
		std::print("\nEnter Student name: ");
		getline(cin, name);
		student.push_back(name);
		std::print("\nEnter Student grade: ");
		cin >> grade;
		studentGrade.push_back(grade);
		cout << "\n" << "to stop adding enter 1," << " enter 2 to continue: ";
		cin >> decide;
		cin.ignore();
		if (decide == 1)
			break;
	}
}
void showingStudents() {
	if (student.empty() || studentGrade.empty()) 
		cout << "\n" << "One of the listes are empty" << endl;
	else {
		for (size_t i = 0; i < student.size(); i++) {
			std::print("\n{}. {}\t{}\n",(i+1), student[i], studentGrade[i]);
		}
	}
}
void checkStudentStatus() {
	if (student.empty() || studentGrade.empty())
		cout << "\n" << "One of the listes are empty" << endl;
	else {
		short int index;
		short int decide;
		while (true) {
			cout << "\n" << "Enter the student index: ";
			cin >> index;
			if (index > student.size())
				cout << "This Student is not in the system!" << endl;
			else {
				std::print("{}: {}\n","The Student", student[index-1]);
				if (studentGrade[index - 1] >= 50)
					cout << "Pass" << endl;
				else
					cout << "Fail" << endl;
			}
			cout << "To return enter 1: ";
			cin >> decide;
			if (decide == 1)
				break;
		}
	}
}
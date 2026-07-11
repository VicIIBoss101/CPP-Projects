#include <iostream>
using namespace std;

void gradeList(int arr[], int size);
void passOrFaill(int arr[], int size);

int main() {
	int num[]{ 60 , 80 , 70 , 50 , 90 };
	int listSize = size(num);
	int choice;
	while (true) {
		cout << "-------- main menu --------" << endl;
		cout << "1. show the grade list \n2. check if pass or  faill\n3. exit" << endl;
		cout << "enter your choice: ";
		cin >> choice;
		switch (choice) {
		case 1:
			gradeList(num, listSize);
			break;
		case 2:
			passOrFaill(num, listSize);
			break;
		case 3: 
			cout << "welcome here " << endl;
			return 0;
		default :
			cout << "wrong choice !!" << endl;
		}

	}
}
void gradeList(int arr[], int size) {
	cout << "--- grade list ---" << endl;
	for (int i = 0; i < size; i++) {
		cout << (i + 1) << ". " << arr[i] << endl;
	}
}
void passOrFaill(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 50) {
			cout << (i + 1) << ". " << "pass" << endl;
		}
		else {
			cout << (i + 1) << ". " << "faill" << endl;
		}
	}
}
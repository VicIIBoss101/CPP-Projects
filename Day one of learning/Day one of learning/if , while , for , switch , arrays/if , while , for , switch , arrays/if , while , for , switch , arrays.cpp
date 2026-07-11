#include <iostream>
using namespace std;
int main() {
	int num[]{ 10 , 60 , 70 , 60 , 50 };
	int choice;
	while (true) {
		cout << "==== Main menu ====" << endl;
		cout << "1. Show all grades "<< endl;
		cout << "2. check Pass / fail " << endl;
		cout << "3. exit " << endl;
		cout << " enter your choice : ";
		cin >> choice;
		switch (choice) {
		case 1:
			for (int i = 0; i < size(num); i++) {
				cout <<  (i+1)  <<". " << num[i] << endl;
			}
			break;
		case 2:
			for (int i = 0; i < size(num); i++) {
				if (num[i] >= 50) {
					cout << (i+1) << ". " << num[i] << " pass" << endl;
				}
				else {
					cout << (i+1) << ". " << num[i] << " fail" << endl;
				}
			}
			break;
		case 3:
			cout << " welcome here" << endl;
			return 0;
		default : 
			cout << " wrong choice !!" << endl;
		}

	}
}
/*
* استعملنا 
* size(var) 
* حتى نطلع حجم المصفوفة يعني بديلة لـ
* var.length
*/
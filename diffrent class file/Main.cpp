#include <iostream>
#include <string>
#include "Student.h"
using namespace std;
int main()
{
	Student st1;
	int id;
	cout << "Enter student ID: ";
	cin >> id;
	st1.setStID(id);
	return 0;
}

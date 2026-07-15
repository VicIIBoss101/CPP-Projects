#include "Student.h"
#include <iostream>
#include <string>
Student::Student() {
	stId = 0;
}
void Student::setStID(int stuID) {
	stId = stuID;
	std::cout << stId << std::endl;
}

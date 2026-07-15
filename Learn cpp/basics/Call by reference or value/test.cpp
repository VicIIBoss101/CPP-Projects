#include <iostream>
#include <algorithm>
#include <print>

using namespace std;
void callByValue(int num1, int num2) {
	swap(num1, num2);
}
void callByReference(int& num1, int& num2) {
	swap(num1, num2);
}
int main1() {
	int num1 = 24, num2 = 54;
	callByValue(num1, num2);
	//the swap won't apply because we only passedit the value.
	std::print("the number before swap {} , {} {}" , num1 , num2, "\n");
	callByReference(num1, num2);
	// here it will efetct the variable because we passedit
	std::print("the numbers after swap {} , {} {}", num1, num2, "\n");
	return 0;
}

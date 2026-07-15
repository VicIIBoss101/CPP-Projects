#include <iostream>
#include <string>
#include <print>
using namespace std;
int sum(int num1, int num2) {
    return (num1 + num2);
}
int main()
{
    int num1, num2, sumN;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "\n" << "Enter the second number: ";
    cin >> num2;
    sumN = sum(num1, num2);
    std::print("the sum is: {}" , sumN);
}
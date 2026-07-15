#include <iostream>
#include <algorithm>
#include <cmath>
#include <print>
#include <cstdlib>
using namespace std;
int main()
{
    cout << "The max is: "<< max(1, 8);
    // return the max vaule
    int num1 = 4, num2 = 7;
    std::print("\nthe numbers before swap: num1 = {} and num2 = {}", num1, num2);
    swap(num1, num2);
    std::print("\nThe numbers after swap: num1 = {}, num2 = {} {}", num1, num2 , "\n");
    // give random num from 0 ... 32000
    for (int i = 0; i < 10; i++)
        cout << rand() % 10 + 1 << "\n";
    return 0;
}
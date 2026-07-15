#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1 = "43.22";
    int int_st1 = stoi(str1);
    string to_int = to_string(int_st1);
    std::cout << int_st1 << "\n";
}

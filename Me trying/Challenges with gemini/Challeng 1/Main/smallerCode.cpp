#include <iostream>
using namespace std;

int sumOddNumC1(int n) {
	if (n <= 0) return 0;
	return (n % 2 == 0) ? sumOddNumC1(n - 1) : n + sumOddNumC1(n - 2);
}
int sumOddNumC2(int n) {
	return (n <= 0) ? 0 : (n % 2 == 0) ? sumOddNumC2(n - 1) : n + sumOddNumC2(n - 2);
}
int main() {
	int n;
	cout << "Enter value for n: ";
	cin >> n;
	cout << "sum is : " << sumOddNumC2(n);
	return 0;
}
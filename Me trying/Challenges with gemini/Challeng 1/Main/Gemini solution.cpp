//#include <iostream>
//using namespace std;
//
//int sumOddNums(int n) {
//	if (n <= 0)
//		return 0;
//	if (n == 1)
//		return 1;
//	if (n % 2 == 0)
//		return sumOddNums(n - 1);
//	return n + sumOddNums(n - 2);
//}
//int main() {
//	int n;
//	cout << "Enter value for n: ";
//	cin >> n;
//	cout << "The sum is : " << sumOddNums(n);
//	return 0;
//}
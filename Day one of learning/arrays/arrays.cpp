#include <iostream>
using namespace std;
int main() {
	int num[5];
	for (int i = 0; i < 5; i++) {
		cout << " enter a number : " << endl;
		cin >> num[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << num[i] << " " << endl;
	}
	return 0;
}
// output
/* enter a number :
1
enter a number :
3
enter a number :
4
enter a number :
5
enter a number :
6
1
3
4
5
6
*/
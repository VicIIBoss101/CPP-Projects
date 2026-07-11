#include <iostream>
using namespace std;

void showGrades(int arr[], int size);
// هنا عرفنا البرنامج انو اكو دالة بعدين راح استدعيها
// و الاقواس هنا []
//يعني راح تكون في مصفوفة من نوع انتجر
int main() {
	int num[]{ 50 , 50 , 30 , 70 , 60 };
	showGrades(num, 5);
	return 0;
}
// function
void showGrades(int arr[], int size) {
	cout << "--- grade list ---" << endl;
	for (int i = 0; i < size; i++) {
		cout << (i + 1) << ". " << arr[i] << endl;
	}
}
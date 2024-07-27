#include <iostream>
using namespace std;

int main() {
	int num;
	int sum=0;
	int fact = 1;
	cout << "num: ";
	cin >> num;

	for (int i = num; i > 0; i--) {
		fact = 1;
		for (int j = i; j > 0; j--) {
			fact *= j;
		}
		sum += fact;
	}
	cout << "Sum of factorials of first " << num << " natural numbers is " <<  sum << endl;
}
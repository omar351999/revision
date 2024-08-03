#include <iostream>
using namespace std;


int GCD_Quest(int min,int max) {
	if (min > max) {
		int temp = min;
		min = max;
		max = temp;
	}
	
	int reminder;
	while (max % min != 0) {
		reminder = max % min;
		max = min;
		min = reminder;
	}
	return min;
}
int main() {
	int num1,num2;
	cout << "num1 & num2: ";
	cin >> num1 >> num2;
	cout << GCD_Quest(num1, num2) << endl;
}

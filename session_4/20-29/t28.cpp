#include <iostream>
#include <iomanip>
using namespace std;

int Digits_Sum(int number) {
	int sum = 0;
	while (number) {
		sum += number % 10;
		number /= 10;
	}
	return sum;
}

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout <<"sum= " << Digits_Sum(num);
}
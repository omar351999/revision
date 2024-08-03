#include <iostream>
#include <iomanip>
using namespace std;

int Reverse(int num) {
	int output = 0;

	while (num) {
		output = output * 10 + num % 10;
		num /= 10;
	}
	return output;
}

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout << Reverse(num) << endl;
}
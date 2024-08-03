#include <iostream>
using namespace std;


int Factorial(int num) {
	if (num == 1) {
		return num;
	}
	return num * Factorial(num - 1);
}
int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout << Factorial(num) << endl;
}

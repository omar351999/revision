#include <iostream>
using namespace std;

int Sum(int n1, int n2) {
	return n1 + n2;
}

int main() {
	int num1,  num2;
	cout << "num1: ";
	cin >> num1;
	cout << "num2: ";
	cin >> num2;
	cout << Sum(num1, num2) << endl;
}
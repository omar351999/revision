#include <iostream>
using namespace std;

int main() {
	char operation_sign;
	float num1, num2;

	cout << "please enter operation sign: ";
	cin >> operation_sign;
	cout << "enter num1: ";
	cin >> num1;
	cout << "enter num2: ";
	cin >> num2;

	if (operation_sign == '+') {
		cout << num1 << " " << operation_sign << " " << num2 << " = "<<num1 + num2;
	}else if (operation_sign == '-') {
		cout << num1 << " " << operation_sign << " " << num2 << " = "<<num1 - num2;
	}else if (operation_sign == '*') {
		cout << num1 << " " << operation_sign << " " << num2 << " = "<<num1 * num2;
	}else if (operation_sign == '/') {
		if (num2 == 0) {
			cout << "sorry, not valid divition by 0";
		}
		else {
			cout << num1 << " " << operation_sign << " " << num2 << " = "<<num1 / num2;
		}
	}else if (operation_sign == '%') {
		cout << num1 << " " << operation_sign << " " << num2 << " = " << fmod(num1, num2);
	}
	else {
		cout << "sorry, not valid operation";
	}
	cout << endl;
}
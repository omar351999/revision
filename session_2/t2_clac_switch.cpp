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


	switch (operation_sign) {
	case '+':
		cout << num1 << " " << operation_sign << " " << num2 << " = "<<num1 + num2;
		break;
	case '-':
		cout << num1 << " " << operation_sign << " " << num2 << " = "<<num1 - num2;
		break;
	case '*':
		cout << num1 << " " << operation_sign << " " << num2 << " = "<<num1 * num2;
		break;
	case '/':
		switch (int(num2))
		{
		case 0:
			cout << "sorry, not valid divition by 0";
			break;
		default:
			cout << num1 << " " << operation_sign << " " << num2 << " = "<<num1 / num2;
			break;
		}
		break;
	case '%':
		cout << num1 << " " << operation_sign << " " << num2 << " = " << fmod(num1, num2);
		break;
	default:
		cout << "sorry, not valid operation";
	}

	cout << endl;
}
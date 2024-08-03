#include <iostream>
#include <windows.h>
using namespace std;

bool Password_Checker(int pass ,int confirm) {
	if (pass != confirm) {
		return false;
	}
	return true;
}


int main() {
	int password, pass_confirm;
	bool isTrue = true;
	cout << "Enter password: ";
	cin >> password;
	do {
		cout << "Confirm password: ";
		cin >> pass_confirm;
		if (Password_Checker(password, pass_confirm)) {
			// change console text color
			HANDLE console_color = GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(console_color,10);
			cout << "Password accepted." << endl;
			
			isTrue = false;
		} else {
			cout << "Incorrect password. Try again!" << endl;
		}
	} while (isTrue);
}
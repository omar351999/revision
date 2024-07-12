#include <iostream>
using namespace std;

int main() {
	int a = 45;
	int b = 76;

	if (a % 2) {
		cout << a << endl;
	}else if (b % 2) {
		cout << b << endl;
	}else {
		cout << "both numbers are even,no one is odd!" << endl;
	}
}
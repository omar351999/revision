#include <iostream>
using namespace std;

int main() {	
	int base, exponent,  multip = 1;
	cout << "base & exponent: ";
	cin >> base >> exponent;

	for (int i = 0; i < exponent; i++) {
		multip *= base;
	}
	cout << base<<"^" << exponent << "= " <<  multip << endl;
}
#include <iostream>
using namespace std;

int main() {	
	int num;
	int tries = 0;
	int expected = 30;
	cout << "guess expected num from 0 to 100: ";
	cin >> num;

	while (num != expected) {
		if (num > expected) {
			cout << "Too high! Try again." << endl;
		}
		else {
			cout << "Too low! Try again." << endl;
		}
		cout << "guess expected num from 0 to 100: ";
		cin >> num;
		tries++;
	}
	cout << "Correct! The number was " << expected <<"\t,after "<<tries <<" tries." << endl;
}
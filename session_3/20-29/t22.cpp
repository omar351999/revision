#include <iostream>
using namespace std;

int main() {	
	int num;
	bool isprime = true;
	cout << "num: ";
	cin >> num;
	int counter = 0, prime=1;

	while (counter < num) {
		for (int i = 2; i < prime; i++) {
			if (prime % i == 0) {
				isprime = false;
				break;
			} else {
				isprime = true;
			}
		}

		if (isprime) {
			cout << prime <<" " << endl;
			counter++;
		}
		prime++;
	}
}
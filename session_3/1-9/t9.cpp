#include <iostream>
using namespace std;

int main() {	
	int num;
	bool isprime = true;
	cout << "num: ";
	cin >> num;

	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			isprime = false;
			break;
		}
	}

	if (isprime) {
		cout << num <<" is prime!" << endl;
	}
	else {
		cout << num <<" not prime!" << endl;
	}
}
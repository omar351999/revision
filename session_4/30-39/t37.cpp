#include <iostream>
#include <string>
using namespace std;

bool isPrime(int num) {
	bool isp = true;
	if (num < 2) {
		return false;
	}

	for (int i = 2; i < num; i++) {
		if (!(num % i)) {
			isp = false;
			break;
		}
		else {
			isp = true;
		}
	}
	return isp;
}

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout << (isPrime(num) ? "Yes" : "No") << endl;
}
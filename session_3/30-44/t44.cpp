#include <iostream>
using namespace std;

int main() {	
	int num;
	int max = 0;

	cout << "num: ";
	cin >> num;

	while (num > 0) {
		if (num % 10 > max) {
			max = num % 10;
		}
		num/=10;
	}
	cout << max << endl;
	
}
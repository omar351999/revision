#include <iostream>
using namespace std;

/*
(i=2)(j=2) (j<=1)
*/

int main() {
	int sum = 0;

	for (int i = 1; i < 50; i++) {
		if (i % 2 == 0) {
			sum += i;
		}
	}
	cout << sum << endl;
}
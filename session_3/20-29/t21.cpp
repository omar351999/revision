#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	float sum = 0;

	for (float i = 1; i < num+1; i++) {
		sum += 1.0 / i;
	}
	cout << sum << endl;
}
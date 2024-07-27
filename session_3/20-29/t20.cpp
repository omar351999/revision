#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// by chat gpt
int main() {
	int a = 2; // First term
	int r = 3; // Common ratio
	int n = 4; // Number of terms
	int sum = 0;

	for (int i = 0; i < n; i++) {
		sum += a*pow(r,i);
	}
	cout << sum << endl;
}
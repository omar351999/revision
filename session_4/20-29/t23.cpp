#include <iostream>
using namespace std;

int GCD(int a,int b) {
	if (a>b) {
		int temp = b;
		b = a;
		a = temp;
	}
	int i = a, out=INT_MIN;
	while (i) {
		if (a % i == 0 && b % i == 0 && i > out) {
			out = i;
		}
		i--;
	}
	return out;
}

int main() {
	cout << GCD(30, 25) << endl;
	cout << GCD( 25 , 30) << endl;
}
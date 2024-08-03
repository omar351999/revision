#include <iostream>
using namespace std;

int GCD(int a, int b) {
	if (a > b) {
		int temp = b;
		b = a;
		a = temp;
	}
	int i = a;
	while (i) {
		if (a % i == 0 && b % i == 0) {
			return i;
			break;
		}
		i--;
	}
	return i;
}

int LCM(int min,int max) {
	return (min * max) / GCD(min, max);
}

int main() {
	cout << LCM( 15 , 20) << endl;
	cout << LCM( 20 , 15) << endl;
}
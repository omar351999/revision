#include <iostream>
using namespace std;

int main() {
	int a = 45;
	int b = 76;
	int min;
	
	if (a > b) {
		min = b;
		b = a;
		a = min;
	}

	while (a <= b) {
		if (a & 1) {
			cout << a << " => odd"<<endl;
		}
		a++;
	}
}

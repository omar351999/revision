#include <iostream>
#include <math.h>
using namespace std;

int BToD(int bin) {
	int dec = 0;
	int index = 0;
	while (bin) {
		dec += bin%10 * pow(2, index);
		index++;
		bin /= 10;
	}
	return dec;
}

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout << BToD(num) << endl;
}
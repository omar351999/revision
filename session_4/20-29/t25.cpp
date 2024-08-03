#include <iostream>
#include <iomanip>
using namespace std;

/*
    ( dec = 15 )
	bin=1 ,index=10 ,dec=7
	bin=11 ,index=100 ,dec=3
	bin=111 ,index=1000 ,dec=1
	bin=1111 ,index=10000 ,dec=0
*/
int DToB(int dec) {
	int bin = 0;
	int index = 1;
	while (dec) {
		bin += dec % 2 * index;
		index *= 10;
		dec /= 2;
	}
	return bin;
}

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout << DToB(num) << endl;
}
#include <iostream>
#include <string>
using namespace std;



int main() {
	int num;
	int sum = 0;
	bool next = true;
	do {
		cout << "num: ";
		cin >> num;
		if (num > 0) {
			sum += num;
		}else {
			cout << "sum= " << sum << endl;
			next = false;
		}
	} while (next);
}
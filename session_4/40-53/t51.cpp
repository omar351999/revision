#include <iostream>
using namespace std;


void Collatz_Conundrum(int num) {
	cout << "Collatz Sequence for " << num << ": " << num <<  " ";
	while (num > 1) {
		if (num % 2 == 0) {
			num /= 2;
		}
		else {
			num = num * 3 + 1;
		}
		cout << num << " ";
	}
	cout << endl;
}
int main() {
	int num;
	cout << "num: ";
	cin >> num;
	Collatz_Conundrum(num);
}

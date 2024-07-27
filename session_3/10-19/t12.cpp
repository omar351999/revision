#include <iostream>
using namespace std;

int main() {
	int num = 12345;
	int sum = 0;
	while (num) {
		sum = sum + num%10;
		num /= 10;
	}
	cout << sum << endl;
}
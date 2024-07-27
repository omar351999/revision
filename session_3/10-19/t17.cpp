#include <iostream>
#include <string>
using namespace std;

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	int res = 0, i = 1;
	
	while (num) {
		res += num % 2 * i;
		i = i*10;
		num /= 2;
	}
	cout << res << endl;
}
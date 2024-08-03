#include <iostream>
#include <iomanip>
using namespace std;

int Factorial(int n) {
	int result = 1;
	do {
		result *= n;
		n--;
	} while (n);
	return result;
}

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout <<"(" << num << "!)= " << Factorial(num) << endl;
}
#include <iostream>
#include <string>
using namespace std;

int Greatest(int n1, int n2, int n3) {
	if (n1 > n2 && n1 > n3) {
		return n1;
	}
	else if (n2 > n1 && n2 > n3) {
		return n2;
	}
	else {
		return n3;
	}
}

int main() {
	int num1, num2,  num3;
	cout << "num1 & num2 & num3: ";
	cin >> num1 >> num2 >> num3;
	cout << "Greatest Number: " << Greatest(num1, num2, num3) << endl;
}
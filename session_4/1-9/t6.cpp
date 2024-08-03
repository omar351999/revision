#include <iostream>
#include <iomanip>
using namespace std;

float Cube(int n1) {
	return n1*n1*n1;
}

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout << num << "^3= " << Cube(num) << endl;
}
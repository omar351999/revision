#include <iostream>
#include <iomanip>
using namespace std;

int Square(int n1) {
	return n1*n1;
}

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	cout << Square(num) << endl;
}
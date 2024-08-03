#include <iostream>
#include <iomanip>
using namespace std;

float Avrg(int n1, int n2,int n3) {
	return (float(n1) + float(n2) + float(n3)) / 3.0;
}

int main() {
	int num1,  num2,num3;
	cout << "num1: ";
	cin >> num1;
	cout << "num2: ";
	cin >> num2;
	cout << "num3: ";
	cin >> num3;
	cout << fixed << setprecision(1)<< "Average:" << Avrg(num1, num2, num3) << endl;
}
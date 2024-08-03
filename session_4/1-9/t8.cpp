#include <iostream>
#include <iomanip>
using namespace std;

float Fahrenheit_To_Celsius(float f) {
	return (f - 32.0)*(5.0 / 9.0);
}

int main() {
	int degree;
	cout << "degree Fahrenheit: ";
	cin >> degree;
	cout << degree << " \370F= " << Fahrenheit_To_Celsius(degree) << " \370C" << endl;
}
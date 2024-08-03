#include <iostream>
#include <iomanip>
using namespace std;

float Celsius_To_Fahrenheit(int Celsius) {
	return (1.8 * Celsius) + 32;
}

int main() {
	int degree;
	cout << "degree Celsius: ";
	cin >> degree;
	cout<< degree<<" \370C= " << Celsius_To_Fahrenheit(degree) << " \370F" << endl;
}
#include <iostream>
#include "Calculator.h";
using namespace std;

int main() {
	Calculator Calc;
	Calc.set_oper1(15);
	Calc.set_oper2(9);

	cout << Calc.Add() << endl;
	cout << Calc.Add(4.2,5.3) << endl;
	cout << Calc.Subtract() << endl;
	cout << Calc.Multiply() << endl;
	cout << Calc.Divide() << endl;
}
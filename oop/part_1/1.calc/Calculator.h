#pragma once
class Calculator
{
	double operand1, operand2;

public:
	void set_oper1(double opr1);
	void set_oper2(double opr2);
	double get_operand1();
	double get_operand2();

	double Add();
	double Add(double n1, double n2);
	double Subtract();
	double Multiply();
	double Divide();

	Calculator();
	Calculator(double num1, double num2);
	~Calculator();
};

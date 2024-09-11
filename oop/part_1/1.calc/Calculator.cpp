#include <iostream>
#include "Calculator.h"
using namespace std;

void Calculator::set_oper1(double opr1)
{
	operand1 = opr1;
}

void Calculator::set_oper2(double opr2)
{
	operand2 = opr2;
}

double Calculator::get_operand1()
{
	return operand1;
}

double Calculator::get_operand2()
{
	return operand2;
}

double Calculator::Add()
{
	cout << get_operand1() << " + " << get_operand2() << " = ";
	return get_operand1() + get_operand2();
}

double Calculator::Add(double n1, double n2)
{
	//operand1 = n1;
	//operand2 = n1;
	cout << n1 << " + " << n2 << " = ";
	return n1+n2;
}

double Calculator::Subtract()
{
	cout << get_operand1() << " - " << get_operand2() << " = ";
	return get_operand1() - get_operand2();
}

double Calculator::Multiply()
{
	cout << get_operand1() << " * " << get_operand2() << " = ";
	return get_operand1() * get_operand2();
}

double Calculator::Divide()
{
	cout << get_operand1() << " / " << get_operand2() << " = ";
	return get_operand1() / get_operand2();
}

Calculator::Calculator(){
	operand1 = 0;
	operand2 = 0;
}

Calculator::Calculator(double num1, double num2)
{
	operand1 = num1;
	operand2 = num2;
}

Calculator::~Calculator()
{
}






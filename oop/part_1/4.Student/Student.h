#pragma once
#include <string>
using namespace std;

class Student
{
private:
	double grade1, grade2, grade3;

public:
	void set_grade1(double g);
	void set_grade2(double g);
	void set_grade3(double g);
	double get_grade1();
	double get_grade2();
	double get_grade3();

	double calculateAverage();
};

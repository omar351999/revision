#include "Student.h";

void Student::set_grade1(double g)
{
	grade1 = g;
}

void Student::set_grade2(double g)
{
	grade2 = g;
}

void Student::set_grade3(double g)
{
	grade3 = g;
}

double Student::get_grade1()
{
	return grade1;
}

double Student::get_grade2()
{
	return grade2;
}

double Student::get_grade3()
{
	return grade3;
}

double Student::calculateAverage()
{
	return (grade1 + grade2 + grade3) / 3;
}



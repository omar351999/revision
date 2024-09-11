#include <iostream>
#include <string>
#include "Student.h";
using namespace std;

int main() {
	Student GradeCalculator;
	GradeCalculator.set_grade1(70);
	GradeCalculator.set_grade2(80);
	GradeCalculator.set_grade3(90);
	cout << GradeCalculator.calculateAverage() << endl;
}
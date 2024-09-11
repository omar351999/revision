#include <iostream>
#include "Rectangle.h";
using namespace std;

int main() {
	Rectangle rect;
	rect.setLength(5.3);
	rect.setWidth(9);

	cout <<  "Area = " << rect.calculateArea() << endl;
	cout << "Perimeter = " << rect.calculatePerimeter() << endl;
}
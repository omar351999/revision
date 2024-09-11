#pragma once
class Rectangle
{
	double length, width;

public:
	void setLength(double l);
	void setWidth(double w);
	double getLength();
	double getWidth();
	double calculateArea();
	double calculatePerimeter();
};

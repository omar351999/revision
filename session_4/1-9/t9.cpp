#include <iostream>
#include <iomanip>
using namespace std;

float Rectangle_Area(int x,int y) {
	return x*y;
}

int main() {
	int x,y;
	cout << "x & y: ";
	cin >> x >> y;
	cout << "Area= " << Rectangle_Area (x,y)<< endl;
}
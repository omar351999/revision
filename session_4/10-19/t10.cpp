#include <iostream>
#include <iomanip>
using namespace std;

float Rectangle_Perimeter(int x,int y) {
	return (x + y) * 2;
}

int main() {
	int x,y;
	cout << "x & y: ";
	cin >> x >> y;
	cout << "Perimeter= ("<< x <<" + "<< y<< ") * 2 = " << Rectangle_Perimeter(x, y) << endl;
}
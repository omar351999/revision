#include <iostream>
#include<array> 
using namespace std;

void Operations() {
	cout << "----------------" << endl;
	cout << "1)Add" << endl;
	cout << "2)Subtract" << endl;
	cout << "3)Multiply" << endl;
	cout << "4)Divide" << endl;
	cout << "----------------" << endl;
}

int Add(int x, int y) {
	return x + y;
}
int Subtract(int x, int y) {
	return x - y;
}
int Multiply(int x, int y) {
	return x * y;
}
int Divide(int x, int y) {
	return x / y;
}
int get_operation() {
	int choose;
	cout << "choose: ";
	cin >> choose;
	while (choose > 4 || choose < 1) {
		cout << "choose: ";
		cin >> choose;
	}
	return choose;
}


int main() {
	bool next = true;
	int x, y;
	do {
		cout << "x & y: ";
		cin >> x >> y;
		Operations();
		switch (get_operation())
		{
		case 1:
			cout <<"sum= " << Add(x, y) << endl;
			break;
		case 2:
			cout << "Subtract= " << Subtract(x, y) << endl;
			break;
		case 3:
			cout << "Multiply= " << Multiply(x, y) << endl;
			break;
		default:
			cout << "Divide= " << Divide(x, y) << endl;
			break;
		}
		cout << "next operation (0 or 1)? ";
		cin >> next;
	} while (next);
}
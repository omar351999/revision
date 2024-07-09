#include <iostream>
using namespace std;

int main() {
	int data=5;
	cout << "Enter Your Number: ";
	cin >> data;

	if (data<=0) {
		cout << "not valid!" << endl;
	}else if (!(data % 2)) {
		data++;
		cout << "even number\n"<< data << endl;
	}else {
		data--;
		cout << "odd number\n"<< data << endl;
	}
}
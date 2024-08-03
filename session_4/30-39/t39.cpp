#include <iostream>
#include <string>
using namespace std;

void Swap(int n1, int n2) {
	cout << "Before Swap: " << n1 << " " << n2 << endl;
	int temp = n1;
	n1 = n2;
	n2 = temp;
	cout << "After Swap: " << n1 << " " << n2 << endl;
}

int main() {
	int num1, num2;
	cout << "num1 & num2: ";
	cin >> num1 >> num2 ;
	Swap(num1,num2);
}
#include <iostream>
using namespace std;

int main() {
	int n1, n2,temp;
	cout << "please enter your range: ";
	cin >> n1 >> n2;

	if (n1 > n2) {
		temp = n2;
		n2 = n1;
		n1 = temp;
	}

	cout << "-----------------\n";
	for (int i = n1; i <= n2; i++) {
		cout << i << endl;
	}
	cout << "-----------------\n";

	/*
	int n1, n2;
	int smallest, biggest;
	cout << "please enter your range: ";
	cin >> n1 >> n2;

	if (n1 < n2) {
		smallest = n1;
		biggest = n2;
	}else {
		smallest = n2;
		biggest = n1;
	}

	cout << "-----------------\n";
	for (int i = smallest; i <= biggest; i++) {
		cout << i <<  endl;
	}
	cout << "-----------------\n";
	*/
}
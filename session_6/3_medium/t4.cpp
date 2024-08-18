#include <iostream>
using namespace std;
/*
0 1 1 2 3 5
*/
int main() {
	int pre = 0;
	int next = 1;
	int temp = next;

	int n;
	cout << "n: ";
	cin >> n;
	int* arr = new int[n];
	
	if (n <= 0) {
		cout << "not valid value" << endl;
		return 0;
	}

	arr[0] = pre;
	for (int i = 1; i < n; i++) {
		temp = next;
		arr[i] = next;
		next += pre;
		pre = temp;
	}

	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;
}
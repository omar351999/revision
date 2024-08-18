#include <iostream>
using namespace std;

int main() {

	int n;
	cout << "n: ";
	cin >> n;

	// initialize 2d array
	int** arr = new int*[n];

	// initialize 1d array => coulmn
	for (int i = 0; i < n; i++) {
		arr[i] = new int[i + 1];
	}

	// set array values
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i+1; j++) {
			arr[i][j] = i * j;
		}
	}

	// print array items
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	// delete array items
	for (int i = 0; i < n; i++) {
		delete[] arr[i];
	}
	// delete array pointer
	delete[] arr;
}
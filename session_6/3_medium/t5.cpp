#include <iostream>
using namespace std;
/*
	int* arr = new int[ r * c ];
*/
int main() {
	int random = 1 + (rand() % 100);
	int sum = 0;
	int r, c;
	cout << "rows: ";
	cin >> r;
	cout << "column: ";
	cin >> c;

	// initialize array columns
	int** arr = new int*[r];
	for (int i = 0; i < r; i++) {
		arr[i] = new int[c];
	}

	// set array values
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			arr[i][j] = random;
			random = 1 + (rand() % 100);
		}
	}
	
	// print result
	for (int i = 0; i < r; i++) {
		sum = 0;
		for (int j = 0; j < c; j++) {
			cout << arr[i][j] <<" ";
			sum += arr[i][j];
		}
		cout << "\t=> " << sum << endl;
	}

	// delete array items
	for (int i = 0; i < r; i++) {
		delete []arr[i];
	}

	// delete array pointer
	delete []arr;
	cout << endl;
}
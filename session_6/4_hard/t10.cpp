#include <iostream>
using namespace std;

int main() {

	int n, m;
	cout << "n, m: ";
	cin >> n >> m;

	// initialize array
	int* arr = new int[n * m];
	int** result = new int*[n];

	// set 1d array values
	int count = 0;
	for (int i = 0; i < n * m; i++) {
		arr[i] = count++;
	}	
	
	// print 1d array values
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i * n + j] << "\t";
		}
		cout << endl;
	}

	// initial 2d array
	for (int i = 0; i < n; i++) {
		result[i] = new int[m];
	}	
	
	// transpose the matrix
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			result[i][j] = arr[i * n + j];
		}
	}

	// delete arr after transpose
	delete[] arr;

	// print 2d array values
	cout << "-------------------------" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << result[i][j] << "\t";
		}
		cout << endl;
	}

	// delete 2d array
	for (int i = 0; i < n; i++) {
		delete[] result[i];
	}
	delete[] result;
}
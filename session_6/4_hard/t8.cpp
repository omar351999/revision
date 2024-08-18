#include <iostream>
using namespace std;

int main() {

	// create row
	int** arr_1 = new int* [3];
	int** arr_2 = new int* [3];
	int** result = new int* [3];
	
	// create column
	for (int i = 0; i < 3; i++) {
		arr_1[i] = new int[3];
		arr_2[i] = new int[3];
		result[i] = new int[3];
	}

	// set values
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr_1[i][j] = 1 + (rand() % 100);
			arr_2[i][j] = 1 + (rand() % 100);
			cout << arr_1[i][j] << "\t" << arr_2[i][j] << endl;
		}
	}

	// set result values
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			result[i][j] = arr_1[i][j] * arr_2[i][j];
		}
	}
	
	// print result
	cout << "------------------------" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << result[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "------------------------" << endl;

	// delete array
	for (int i = 0; i < 3; i++) {
		delete[] arr_1[i];
		delete[] arr_2[i];
		delete[] result[i];
	}

	delete[] arr_1;
	delete[] arr_2;
	delete[] result;
}
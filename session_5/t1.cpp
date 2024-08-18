#include <iostream>
using namespace std;


int main() {
	int arr[5];
	// Filling
	for (int i = 0; i < 5; i++) {
		arr[i] = i + 1;
	}
	// Printing 
	for (int i = 0; i < 5; i++) {
		cout << arr[i]<< " ";
	}

	cout << endl << "-----------------------------------" << endl;
	int counter = 1;
	int arr2[6][2][9];
	// Filling
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 9; k++) {
				arr2[i][j][k] = counter;
				counter++;
			}
		}
	}
	// Printing 
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 9; k++) {
				cout << arr2[i][j][k] << " ";
			}
			cout << endl;
		}
	}
	cout << endl << "-----------------------------------" << endl;
	int count = 1;
	int arr3 [3][6][1][2][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 1; k++) {
				for (int m = 0; m < 2; m++) {
					for (int x = 0; x < 4; x++) {
						arr3[i][j][k][m][x] = count;
						count++;
					}
				}
			}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 1; k++) {
				for (int m = 0; m < 2; m++) {
					for (int x = 0; x < 4; x++) {
						cout << arr3[i][j][k][m][x]<< " ";
					}
				}
					cout << endl;
			}
		}
	}

	cout << endl << "-----------------------------------" << endl;
	count = 1;
	int arr4[3][6][2][4];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
				for (int m = 0; m < 2; m++) {
					for (int x = 0; x < 4; x++) {
						arr4[i][j][m][x] = count;
						count++;
					}
				}
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 6; j++) {
			for (int m = 0; m < 2; m++) {
				for (int x = 0; x < 4; x++) {
					cout << arr4[i][j][m][x] << " ";
				}
			}
					cout << endl;
		}
	}
}

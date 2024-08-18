#include <iostream>
using namespace std;

int main() {
	int x, y, z;
	cout << "Enter x , y , z: ";
	cin >> x >> y >> z;

	// initialize frist rows 
	int*** arr_3d = new int** [x];

	// initialize sec rows 
	for (int i = 0; i < x; i++) {
		arr_3d[i] = new int* [y];
	}

	// initialize column 
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			arr_3d[i][j] = new int[z];
		}
	}

	// set values
	int count = 0;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			for (int k = 0; k < z; k++) {
				arr_3d[i][j][k] = count++;
			}
		}
	}

	// print array
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			for (int k = 0; k < z; k++) {
				cout << arr_3d[i][j][k] <<" ";
			}
			cout << endl;
		}
	}

	// delete array
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y; j++) {
			delete[] arr_3d[i][j];
		}
		delete[] arr_3d[i];
	}
	delete[] arr_3d;

}
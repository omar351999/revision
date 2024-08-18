#include <iostream>
using namespace std;

int Sum(int arr3D[3][3][3]) {
	int result = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				result += arr3D[i][j][k];
			}
		}
	}
	return result;
}

int Avg(int arr3D[3][3][3]) {
	return Sum(arr3D) / (3 * 3 * 3);
}

int Max(int arr3D[3][3][3]) {
	int max = INT_MIN;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (arr3D[i][j][k] > max) {
					max = arr3D[i][j][k];
				}
			}
		}
	}
	return max;
}

int Min(int arr3D[3][3][3]) {
	int min = INT_MAX;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 3; k++) {
				if (arr3D[i][j][k] < min) {
					min = arr3D[i][j][k];
				}
			}
		}
	}
	return min;
}

int main() {
	int arr3D[3][3][3] = 
	{ 
		{ {23, 54, 64}, {21, 345, 3}, {8, 5, 34} }, 
		{ {756, 756, 856}, {1, 2, 3}, {3, 4, 76} }, 
		{ {88}, {89}, {100} } 
	};

	cout << "Sum= " << Sum(arr3D) << endl;
	cout << "Avg= " << Avg(arr3D) << endl;
	cout << "Max= " << Max(arr3D) << endl;
	cout << "Min= " << Min(arr3D) << endl;
}

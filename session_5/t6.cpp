#include <iostream>
using namespace std;

void Sum_Rows_2D_Array(int arr2D[2][2]) {
	int arr[2];
	int sum = 0;
	for (int i = 0; i < 2; i++) {
		sum = 0;
		for (int k = 0; k < 2; k++) {
			sum += arr2D[i][k];
		}
		arr[i] = sum;
	}

	cout << "{ ";
	for (int i = 0; i < 2; i++) {
		cout << arr[i] << (i!=1?" , ":"");
	}
	cout << " }";
}

int main() {
	int arr2D[2][2] = { {1, 2}, {3, 4} };
	Sum_Rows_2D_Array(arr2D);
}

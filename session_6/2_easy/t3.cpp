#include <iostream>
using namespace std;
/*
0 1 2 3
1 2 3 4
2 3 4 5
*/
int main() {
	int** arr = new int*[3];
	arr[0] = new int[4];
	arr[1] = new int[4];
	arr[2] = new int[4];

	for (int i = 0; i <3; i++) {
		for (int j = 0; j < 4; j++) {
			arr[i][j] = i + j;
		}
	}

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;

	delete[] arr[0];
	delete[] arr[1];
	delete[] arr[2];
	delete[] arr;

}
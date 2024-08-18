#include <iostream>
using namespace std;

int main() {
	int x;
	cout << "Enter x: ";
	cin >> x ;

	// initialize frist rows 
	int** arr_2d = new int* [x];

	// initialize sec rows 
	for (int i = 0; i < x; i++) {
		arr_2d[i] = new int [x];
	}

	// set values
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			arr_2d[i][j] = (j == i ? 1 : 0);
		}
	}

	// print array
	cout << string(x*2,'-') << endl;
	for (int i = 0; i < x; i++) {
		for (int j = 0; j < x; j++) {
			cout << arr_2d[i][j]<<" ";
		}
		cout << endl;
	}
	cout << string(x*2,'-') << endl;

	// delete array
	for (int i = 0; i < x; i++) {
		delete[] arr_2d[i];
	}
	delete[] arr_2d;

}
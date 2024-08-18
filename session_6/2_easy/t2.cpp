#include <iostream>
using namespace std;

// enter data void
//void Fill_array(int *arr, int size) {
//	for (int i = 0; i < size; i++) {
//		cout << "Enter " << i << " element: ";
//		cin >> arr[i];
//	}
//}
//
//// return pointer
//int* Fill_Dynamic_array(int size) {
//	int* sec_arr = new int[size];
//	
//	for (int i = 0; i < size; i++) {
//		cout << "Enter " << i << " element: ";
//		cin >> sec_arr[i];
//	}
//	return sec_arr;
//}

int main() {
	int size;
	cout << "please enter array size: ";
	cin >> size;
	int* arr = new int[size];

	for (int i = 0; i <size; i++) {
		cout << "Enter " << i << " element: ";
		cin >> arr[i];
	}

	cout << "---------------------" << endl;
	for (int i = size - 1; i >= 0; i--) {
		cout << arr[i] << " ";
	}
	cout << endl;

	delete[] arr;

}
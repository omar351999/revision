#include <iostream>
#include <string>
using namespace std;

void Array_Reverse(int (&arr)[5], int size) {
	int temp = 0;
	for (int i = 0; i < size/2; i++) {
		temp = arr[i];
		arr[i] = arr[size - i - 1];
		arr[size - i - 1] = temp;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}


int main() {
	int arr[5] = {1,2,3,4,5};
	Array_Reverse(arr, 5);
}
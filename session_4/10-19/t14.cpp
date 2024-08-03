#include <iostream>
using namespace std;

void Array_Reverse(int(&arr)[6]) {
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size/2; i++) {
		int temp = arr[size - i -1];
		arr[size - i - 1] = arr[i];
		arr[i] = temp;
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}
/*
int* reverse(int (&arr)[6]) {
	int size = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < size / 2; i++) {
		int temp = arr[size - i - 1];
		arr[size - i - 1] = arr[i];
		arr[i] = temp;
		cout << arr[size - i - 1] << " => " << arr[i] << endl;
	}
	cout << endl;
	return arr;
}
*/



int main() {
	int arr[6] = {1,2,3,4,5,6};
	Array_Reverse(arr);
	
	/*
	int *p = reverse(arr);
	for (int i = 0; i < 6; i++) {
		cout << p[i] << " ";
	}
	delete p;
	*/
}
#include <iostream>
using namespace std;

void Shift_Array(int arr[5],int size,int times) {
	int temp;
	/*while (times) {
		temp = arr[0];
		for (int j = 0; j < size; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = temp;
		times--;
	}*/
	for (int i = 0; i < times; i++) {
		temp = arr[0];
		for (int j = 0; j < size; j++) {
			arr[j] = arr[j + 1];
		}
		arr[size - 1] = temp;
	}

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int times;
	cout << "times: ";
	cin >> times;
	const int size = 5;
	int arr[size] = {1,2,3,4,5};
	Shift_Array(arr, size, times);
}
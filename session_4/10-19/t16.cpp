#include <iostream>
using namespace std;

int Array_Min_Element (int(&arr)[6]) {
	int size = sizeof(arr) / sizeof(arr[0]);
	int min = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int main() {
	int arr[6] = {1,2,9,-1,5,6};
	cout << Array_Min_Element(arr);
}
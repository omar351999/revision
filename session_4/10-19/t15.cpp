#include <iostream>
using namespace std;

int Array_Max_Element (int(&arr)[6]) {
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr[6] = {1,2,9,4,5,6};
	cout << Array_Max_Element(arr);
}
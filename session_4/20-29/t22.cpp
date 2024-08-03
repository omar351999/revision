#include <iostream>
using namespace std;

int Array_Sec_Min_Element (int (&arr)[6]) {
	int size = sizeof(arr) / sizeof(arr[0]);
	int min = INT_MAX;
	int sec = INT_MAX;
	for (int i = 0; i < size; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
		if (arr[i] < sec && arr[i] > min) {
			sec = arr[i];
		}
	}
	return sec;
}

int main() {
	int arr[6] = {1,2,9,8,5,6};
	cout << Array_Sec_Min_Element(arr);
}
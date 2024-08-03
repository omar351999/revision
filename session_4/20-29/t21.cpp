#include <iostream>
using namespace std;

int Array_Sec_Max_Element (int(&arr)[6]) {
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = INT_MIN;
	int sec = INT_MIN;
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			sec=max;
			max = arr[i];
		}
		if (arr[i] > sec && arr[i] < max) {
			sec = arr[i];
		}
	}

	return sec;
}

int main() {
	int arr[6] = {1,2,9,8,5,6};
	cout << Array_Sec_Max_Element(arr);
}
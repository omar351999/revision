#include <iostream>
using namespace std;

int Largest(int arr[5],int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int Second_Largest(int arr[5],int size) {
	int sec = INT_MIN;
	for (int i = 0; i < size; i++) {
		if (arr[i] > sec && arr[i] < Largest(arr, size)) {
			sec = arr[i];
		}
	}
	return sec;
}

int main() {
	const int size = 5;
	int arr[size] = {1,2,3,4,5};
	cout << "largest: " << Largest(arr, size) << endl;
	cout << "second large: " << Second_Largest(arr, size) << endl;
}
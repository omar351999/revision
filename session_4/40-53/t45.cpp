#include <iostream>
using namespace std;

void Remove_Duplication(int arr[10], int size) {
	// loop target each single item as a single value
	for (int i = 0; i < size; i++) {
		// loop to seach the value in array
		for (int j = 0; j < size; j++) {
			if (arr[i] == arr[j] && i != j) {
				// loop to shifting items inside array
				for (int k = j; k < size; k++) {
					arr[k] = arr[k + 1];
				}
				size--;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}


int main() {
	const int size = 10;
	int arr[size] = {1,2,2,3,4,4,5,5,2,3};
	Remove_Duplication(arr, size);
}
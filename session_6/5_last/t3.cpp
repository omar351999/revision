#include <iostream>
using namespace std;

int findMaxElement(int multiplier[], int size) {
	int max = INT_MIN;
	for (int i = 0; i < size; i++) {
		if (multiplier[i] > max) {
			max = multiplier[i];
		}
	}
	return max;
}

int main() {
	int arr[] = { 12, 45, 67, 23, 9 };
	int size = sizeof(arr) / sizeof(arr[0]);

	int maxElement = findMaxElement(arr, size);
	cout << maxElement;
	// maxElement should be 67

}
#include <iostream>
#include <string>
using namespace std;

int Maximum(int arr[5], int size) {
	int max = arr[0];
	for (int i = 0; i < size; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int main() {
	int arr[5] = {1,7,9,2,3};
	cout << "Max= " << Maximum(arr, 5);
}
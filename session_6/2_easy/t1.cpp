#include <iostream>
using namespace std;

int main() {
	int size = 5;
	int* arr = new int[size];
	int counter = 0;

	for (int i = 2; i <= 10; i += 2) {
		arr[counter] = i;
		counter++;
	}

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	delete[] arr;
}
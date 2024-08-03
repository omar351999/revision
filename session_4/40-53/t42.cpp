#include <iostream>
#include <string>
using namespace std;

int Sum(int arr[5], int size) {
	int output = 0;
	for (int i = 0; i < size; i++) {
		output += arr[i];
	}
	return output;
}

int Avg(int arr[5], int size) {
	return Sum(arr, size) / size;
}

int main() {
	int arr[5] = {1,7,9,5,3};
	cout << Avg(arr, 5) << endl;
}
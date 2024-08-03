#include <iostream>
using namespace std;

int array_Sum(int arr[5]) {
	int result = 0;
	for (int i = 0; i < 5; i++) {
		result += arr[i];
	}
	return result;
}

int Avrg(int arr[5]) {
	return array_Sum(arr) / 5;
}

int main() {
	int arr[5] = {1,2,3,4,5};
	cout << Avrg(arr) << endl;
}
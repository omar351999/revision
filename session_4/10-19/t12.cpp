#include <iostream>
#include <iomanip>
using namespace std;

int array_Sum(int arr[5]) {
	int result = 0;
	for (int i = 0; i < 5; i++) {
		result += arr[i];
	}
	return result;
}

int main() {
	int arr[5] = {1,2,3,4,5};
	cout << array_Sum(arr) << endl;
}
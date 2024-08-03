#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int num) {
	if (num < 1) {
		return false;
	}
	bool is = true;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			is = false;
			break;
		}else {
			is = true;
		}
	}
	return is;
}

int Sum_Prime(int(&arr)[5]) {
	int size = (sizeof(arr) / sizeof(arr[0]));
	int sum = 0;
	for (int i = 0; i < size; i++) {
		sum += isPrime(arr[i]) * arr[i];
	}
	return sum;
}

int main() {
	int arr[5] = {2,4,5,7,9};
	cout <<"sum: " << Sum_Prime(arr) << endl;
}
#include <iostream>
#include<array> 
using namespace std;

int Sum(int *nums,int size) {
	int result = 0;
	for (int i = 0; i < size; i++) {
		result += nums[i];
	}
	return result;
}

int Average(int *arr,int s) {
	return Sum(arr, s) / s;
}

int main() {
	int size;
	cout << "size: ";
	cin >> size;
	int* arr=new int[size];
	
	for (int i = 0; i < size; i++) {
		arr[i] = i + 1;
	}
	cout << Sum(arr, size) << endl;
	cout << Average(arr, size) << endl;
	delete []arr;
}
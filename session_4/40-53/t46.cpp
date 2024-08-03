#include <iostream>
using namespace std;

void Merage(int(&arr1)[5], int(&arr2)[5]) {
	const int s1 = sizeof(arr1) / sizeof(arr1[0]);
	const int s2 = sizeof(arr2) / sizeof(arr2[0]);
	const int size = s1 + s2 ;
	int index = 0;
	int result_arr[10] = {};
	
	for (int i = 0; i < s1; i++) {
		result_arr[index] = arr1[i];
		index++;
	}
	for (int i = 0; i < s2; i++) {
		result_arr[index] = arr2[i];
		index++;
	}	
	for (int i = 0; i < size; i++) {
		cout << result_arr[i] <<  " ";
	}
}

int main() {
	int arr1[5] = {1,2,3,4,5};
	int arr2[5] = {6,7,8,9,10};
	Merage(arr1, arr2);
}
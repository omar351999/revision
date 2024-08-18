#include <iostream>
//#include <string>
using namespace std;
/*

0 * 3 + 0
(i=0 && j=0) => 0
(i=0 && j=1) => 1
(i=0 && j=2) => 2

1 * 3 + 0
(i=1 && j=0) => 3
(i=1 && j=1) => 4
(i=1 && j=2) => 5

2 * 3 + 0
(i=2 && j=0) => 6
(i=2 && j=1) => 7
(i=2 && j=2) => 8

3 * 3 + 0
(i=2 && j=0) => 9
(i=2 && j=1) => 10
(i=2 && j=2) => 11

*/

int* apply_all(int* arr1, int s1,int* arr2,int s2) {
	int* output=new int[s1 * s2];

	for (int i = 0; i < s1; i++) {
		for (int j = 0; j < s2; j++) {
			output[i * s2 + j] = arr1[i] * arr2[j];
		}
	}
	return output;
}

void print_array_items(int* arr,int size) {
	cout << '[';
	for (int i = 0; i < size; i++) {
		cout << arr[i] <<(i!=size-1?", ":"");
	}
	cout<<']' << endl;
}

int main() {
	int array1[] = { 1, 2, 3, 4, 5 };
	int array2[] = { 10, 20, 30 };

	int size1 = sizeof(array1)/ sizeof(array1[0]);
	int size2 = sizeof(array2)/ sizeof(array2[0]);

	int* results = apply_all(array1, 5, array2, 3);
	print_array_items(results, size1* size2);

	delete[] results;
	
	// The resulting array should be:
	// [10, 20, 30, 40, 50, 20, 40, 60, 80, 100, 30, 60, 90, 120, 150]

}
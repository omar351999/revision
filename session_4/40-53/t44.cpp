#include <iostream>
#include <string>
using namespace std;

int Count_Occurrences(int (&arr)[10], int size,int num) {
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i]==num) {
			counter++;
		}
	}
	return counter;
}


int main() {
	int num = 7;
	const int size = 10;
	int arr[size] = {7,2,7,9,3,4,5,7,5,7};
	cout << num << " is repeated " << Count_Occurrences(arr, 10, num) << " times." << endl;
}
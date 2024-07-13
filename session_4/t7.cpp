#include <iostream>
using namespace std;

int Sum(int arr[6]) {
	int result = 0,i=0;
	while (i<6){
		result += arr[i];
		i++;
	}
	return result;
}

int Max(int arr[6]) {
	int max = INT_MIN;
	for (int i = 0; i < 6; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

int Min(int arr[6]) {
	int min= INT_MAX;
	for (int i = 0; i < 6; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int Avrg(int arr[6]) {
	return	Sum(arr) / ( sizeof(arr) / sizeof(arr[0]) );
}

void Display(int arr[6]) {
	cout << "Sum= " << Sum(arr) << endl;
	cout << "Average= " << Avrg(arr) << endl;
	cout << "Max= " << Max(arr) << endl;
	cout << "Min= " << Min(arr) << endl;
}

int main() {
	int arr[6] = { 1, 6, 9, 34, 756 , 12 };

	Display(arr);
}
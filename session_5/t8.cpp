#include <iostream>
using namespace std;

void Minimum_Element(int arr4D[2][3][2][2]) {
	int arr[6];
	int index = 0;
	int min;
	for (int i = 0; i < 2; i++) {
		for (int k = 0; k < 3; k++) {
			min = INT_MAX;
			for (int j = 0; j < 2; j++) {
				for (int m = 0; m < 2; m++) {
					if (arr4D[i][k][j][m] < min) {
						min = arr4D[i][k][j][m];
					}
				}
			}
			arr[index] = min;
			index++;
		}
	}
	cout << "{";
	for (int i = 0; i < 6; i++) {
		cout << arr[i] << (i!=5?", ":"");
	}
	cout << "}";
}

int main() {
	int arr4D[2][3][2][2] = 
	{
		{
			{{1, 2}, {3, 4}}, 
			{{5, 6}, {7, 8}}, 
			{{9, 10}, {11, 12}}
		},
		{
			{{13, 14}, {15, 16}}, 
			{{17, 18}, {19, 20}}, 
			{{21, 22}, {23, 24}}
		}
	};

	Minimum_Element(arr4D);
}

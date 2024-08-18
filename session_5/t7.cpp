#include <iostream>
using namespace std;

void Merge_3D(int arr1[2][2][2], int arr2[2][2][2]) {
	int out_arr[4][2][2];
	int index = 0;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				out_arr[index][j][k] = arr1[i][j][k];
			}
		}
		index++;
	}
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				out_arr[index][j][k] = arr2[i][j][k];
			}
		}
		index++;
	}

	cout << "{"<<endl;
	for (int i = 0; i < 4; i++) {
		cout << "  { ";
		for (int j = 0; j < 2; j++) {
			cout << "{";
			for (int k = 0; k < 2; k++) {
				cout << out_arr[i][j][k] << (k != 1 ? "," : "");
			}
			cout << "}"<<(j!=1?", ":"");
		}
		cout << " }" << (i != 3 ? ", " : "")<<endl;
	}
	cout << "}";
}

int main() {
	int arr3D1[2][2][2] = 
	{
		{{1, 2}, {3, 4}},
		{{5, 6}, {7, 8}}
	};

	int arr3D2[2][2][2] =
	{
		{{9, 10}, {11, 12}},
		{{13, 14}, {15, 16}}
	};

	Merge_3D(arr3D1, arr3D2);
/*
	{ 
		{{1,2}, {3,4}}, 
		{{5,6}, {7,8}}, 
		{{9,10}, {11,12}}, 
		{{13,14}, {15,16}}
	}
*/
}

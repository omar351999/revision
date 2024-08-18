#include <iostream>
using namespace std;

void Transpose(int arr2D[2][3]) {
	int arr[3][2];
	for (int i = 0; i < 2; i++) {
		for (int k = 0; k < 3; k++) {
			arr[k][i] = arr2D[i][k];
		}
	}
	cout << "{ ";
	for (int i = 0; i < 3; i++) {
		cout << "{";
		for (int k = 0; k < 2; k++) {
			cout << arr[i][k] << (k == 1?"":",");
		}
		cout << "}"<<(i==2?"":",");
	}
	cout << " }";
	cout << endl;
}


int main() {
	int arr2D[2][3] = 
	{ 
		{1, 2, 3}, 
		{4, 5, 6} 
	};

	Transpose(arr2D);

}

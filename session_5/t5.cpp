#include <iostream>
using namespace std;

/*
int Sum_Diagonal(int arr2D[3][3]) {
	int result = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if ((i - j == 0) || (i == 0 && j == 2) || (i == 2 && j == 0)) {
				result += arr2D[i][j];
			}
		}
	}
	return result;
}
*/


int Sum_Diagonal(int arr2D[3][3]) {
	int result = arr2D[0][0] + arr2D[1][1] + arr2D[2][2] + arr2D[0][2] + arr2D[2][0];
	return result;
}


int main() {
	int arr2D[3][3] = 
	{ 
		{1, 0, 0}, 
		{0, 1, 0}, 
		{0, 0, 1} 
	};

	cout << "Sum_Diagonal= " << Sum_Diagonal(arr2D) << endl;

}

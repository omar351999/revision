#include <iostream>
using namespace std;

int main() {
	int arr[9] = { 1,2,3,4,5,6,7,8,9 };

	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	cout << "-------------------\n";

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		
		cout << arr[i] << " => ";
		cout << ((arr[i] & 1) ? "odd" : "even") << endl;
	}
}
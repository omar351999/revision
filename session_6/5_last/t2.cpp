#include <iostream>
using namespace std;

void multiply_with_pointer(int* multiplier, int num) {
	cout << *multiplier * num << endl;
}

int main() {
	int num = 5;
	multiply_with_pointer(&num, 3);

	// After the function call, num should be 15.

}
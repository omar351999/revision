#include <iostream>
using namespace std;

int main() {
	int num = 5;
	int output = 0;

	for (int i = 1; i <= num; i++) {
		output += i * i;
	}
	cout << output << endl;
}
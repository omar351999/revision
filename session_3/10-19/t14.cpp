#include <iostream>
using namespace std;

int main() {
	int start = 15;
	int end = 20;

	for (int i = 1; i < start; i++) {
		if ((i + 1) * start == end * i) {
			cout << end * i;
			break;
		}
	}
}
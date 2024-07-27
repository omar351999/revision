#include <iostream>
using namespace std;

int main() {
	int smaller = 56;
	int bigger = 98;
	int i = smaller;
	int temp=0;

	if (smaller > bigger) {
		temp = smaller;
		smaller = bigger;
		bigger = temp;
	}

	while (i > 0) {
		if (smaller % i == 0 && bigger % i == 0) {
			cout << i << endl;
			break;
		}
		i--;
	}
}
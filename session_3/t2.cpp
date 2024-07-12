#include <iostream>
using namespace std;

int main() {
	cout << "-------------------------\n";
	cout << "for loop (0:9) except 5: \n";
	for (int i = 0; i < 10; i++) {
		if (i == 5) continue;
		cout << i << endl;
	}
	cout << "-------------------------\n";
	cout << "while loop (0:9) except 5: \n";
	int v = 0;
	while (v < 10)
	{
		if (v != 5) {
			cout << v << endl;
		}
		v++;
	}
	cout << "-------------------------\n";
}
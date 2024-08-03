#include <iostream>
using namespace std;

void Fibonacci_Sequence(int count) {
	int pre = 0;
	int next = 1;
	int counter = 0;
	int temp;

	if (count == 1) {
		cout << pre << " ";
		counter++;
	}else {
		cout << pre << " " << next << " ";
		counter += 2;
	}

	while (counter < count) {
		cout << pre + next << " ";
	    temp = next;
		next += pre;
		pre = temp;
		counter++;
	}
	cout << endl;
}

int main() {
	int count;
	cout << "count: ";
	cin >> count;
	Fibonacci_Sequence(count);
}
#include <iostream>
using namespace std;

int main() {	
	int num;
	int pre = 0;
	int next = 1;
	int temp = 0;

	cout << "num: ";
	cin >> num;

	cout << pre << " " << next << " ";
	while (num > 0) {
		cout << pre + next << " ";
		temp = next;
		next += pre;
		pre = temp;
		num--;
	}
	
}
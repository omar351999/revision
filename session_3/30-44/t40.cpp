#include <iostream>
using namespace std;

int main() {	
	int i=0,sum=0,num;
	cout << "num: ";
	cin >> num;

	while (i <= num) {
		sum += i;
		i++;
	}
	cout << sum << endl;
}
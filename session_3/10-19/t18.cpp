#include <iostream>
#include <string>
using namespace std;

int main() {
	int num,stars=1;
	cout << "num: ";
	cin >> num;
	
	cout << string(num*2,'-') << endl;
	for (int i = 0; i < num; i++) {
		for (int j = 0; j < stars; j++) {
			cout << "* ";
		}
		stars++;
		cout << endl;
	}
	cout << string(num*2,'-') << endl;
}
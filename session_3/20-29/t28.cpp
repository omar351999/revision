#include <iostream>
using namespace std;

int main() {	
	int hight;
	cout << "hight: ";
	cin >> hight;
	int stars = 1, spaces = hight - 1;

	for (int i = 0; i < hight; i++) {
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		for (int j = 0; j < stars; j++) {
			cout << "* ";
		}
		
		spaces--;
		stars++;
		cout << endl;
	}
}
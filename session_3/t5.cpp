#include <iostream>
using namespace std;

/*
    *
   * *
  *   *
 *     *
*********
*/

int main() {
	int hight;
	cout << "Enter hight: ";
	cin >> hight;

	int stars = 1;
	int spaces = hight - 1;

	cout << string(hight * 2, '-') << endl;
	for (int i = 0; i < hight; i++) {
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}
		for (int j = 0; j < stars; j++) {
			if (j == 0 || j == stars - 1 || i == hight - 1) {
				cout << "*";
			}
			else {
				cout << " ";
			}
		}
		spaces--;
		stars += 2;
		cout << endl;
	}
	cout << string(hight * 2, '-') << endl;
}
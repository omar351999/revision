#include <iostream>
using namespace std;

int main() {	
	int height;
	cout << "Please enter pyramid's height: ";
	cin >> height;

	int spaces = height - 1;
	int stars = 1;
	int flip = -1;

	cout << string(height * 2, '-') << endl;
	for (int i = 0; i < height * 2 - 1; i++) {
		for (int j = 0; j < spaces; j++) {
			cout << " ";
		}

		for (int j = 0; j < stars; j++) {
			cout << "*";
		}

		cout << endl;
		spaces += flip;
		stars += 2 * -flip;

		if (i == height - 1) {
			stars = 2 * height - 3;
			spaces = 1;
			flip *= -1;
		}
	}

	cout << string(height*2,'-') << endl;
	int i = 0, j = 0, k = 0;
	spaces = height - 1, stars = 1, flip = -1;
	 
	while (i < height * 2 - 1) {
		j = 0, k = 0;
		while (j < spaces) {
			cout << " ";
			j++;
		}
		while (k < stars) {
			cout << "*";
			k++;
		}
		spaces += flip;
		stars +=2* -flip;
		if (i == height - 2) {
			flip *= -1;
		}
		i++;
		cout << endl;
	}

	cout << string(height * 2, '-') << endl;

}
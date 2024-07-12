#include <iostream>
using namespace std;
/*

	*
   ***
  *****
 *******
*********
 *******
  *****
   ***
	*

*/

/*
height = 5;
height * 2 - 1 = 9 ;
(spaces = 4) & (stars = 1) & (flip = -1)

(i=0) => (spaces = 4) & (stars = 1) & (flip = -1) => ((spaces += flip => 3) & (stars += 2 * -flip => 3))
(i=1) => (spaces = 3) & (stars = 3) & (flip = -1) => ((spaces += flip => 2) & (stars += 2 * -flip => 5))
(i=2) => (spaces = 2) & (stars = 5) & (flip = -1) => ((spaces += flip => 1) & (stars += 2 * -flip => 7))
(i=3) => (spaces = 1) & (stars = 7) & (flip = -1) => ((spaces += flip => 0) & (stars += 2 * -flip => 9))
(i=4) => (spaces = 0) & (stars = 9) & (flip = +1) => ((spaces += flip => 1) & (stars += 2 * -flip => 7))
(i=5) => (spaces = 1) & (stars = 7) & (flip = +1) => ((spaces += flip => 2) & (stars += 2 * -flip => 5))
(i=6) => (spaces = 2) & (stars = 5) & (flip = +1) => ((spaces += flip => 3) & (stars += 2 * -flip => 3))
(i=7) => (spaces = 3) & (stars = 3) & (flip = +1) => ((spaces += flip => 4) & (stars += 2 * -flip => 1))
(i=8) => (spaces = 4) & (stars = 1) & (flip = +1) => ((spaces += flip => 5) & (stars += 2 * -flip => 0))

*/

int main() {
	int height;
	cout << "Please enter pyramid's height: ";
	cin >> height;

	int spaces = height - 1;
	int stars = 1;
	int flip = -1;

	cout << string(height * 2,'-') << endl;
	cout << "for loop: " << endl;
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

//--------------------------------------------------------------------------------------------
	cout << string(height * 2,'-') << endl;
	cout << "while loop: " << endl;

	spaces = height - 1; // 4
	stars = 1;
	flip = -1;

	int i = 0,j= 0,k=0;
	while (i < height * 2-1) {
		j = 0, k = 0;
		if (i == height - 1) { // or (spaces == 0);
			flip *= -1;
		}
		//spaces loop
		while (j<spaces) {
			cout << " ";
			j++;
		}
		//stars loop
		while (k < stars) {
			cout << "*";
			k++;
		}

		// flip=-1 => space = space - 1;
		// flip=1 => space = space + 1;
		spaces-=-flip;
		stars += 2 * -flip;
		// (flip = -1) => stars = stars + 2;
		// (flip = 1)  => stars = stars - 2;

		i++;
		cout <<endl;
	}
	cout << string(height * 2,'-') << endl;
}
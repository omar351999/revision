#include <iostream>
using namespace std;
/*
-------------
| x | o | x | => 1
-------------
| x | o | x | => 3
-------------
| x | o | x | => 5
-------------
*/

void Shape(char arr[3][3]) {
	for (int i = 0; i < 7; i++) {
		if (i % 2 == 0) {
			cout << "-------------";
		}else {
			for (int j = 0; j < 3; j++) {
				cout << "| "<< arr[i/2][j] <<" ";
			}
			cout << "|";
		}
		cout << endl;
	}
}

bool Winner_Check(char arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 1; j++) {
			if (arr[i][j] == arr[i][j + 1] && arr[i][j] == arr[i][j + 2] && arr[i][j] != ' ') {
				return true;
			}
		}
	}

	for (int i = 0; i < 1; i++) {
		for (int j = 0; j < 3; j++) {
			if (arr[i][j] == arr[i+1][j] && arr[i][j] == arr[i+2][j] && arr[i][j] != ' ') {
				return true;
			}
		}
	}

	if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2] && arr[0][0] != ' ') {
		return true;
	}
	if (arr[1][1] == arr[0][2] && arr[1][1] == arr[2][0] && arr[1][1] != ' ') {
		return true;
	}
	return false;
}

void empty_array(char (&arr)[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			arr[i][j] = ' ';
		}
	}
}

int main() {
	int x, y;
	bool winner = false;
	bool is_x = true;
	int counter = 0;
	char arr[3][3];
	bool play_again = false;
	
	empty_array(arr);
	
	Shape(arr);

	do {
		cout << "Enter " << (is_x ? 'X' : 'O') << " place: ";
		cin >> x >> y;
		while (x<0 || x>2 || y<0 || y>2 || arr[x][y]!=' ')
		{
			cout << "Again, Enter " << (is_x ? 'X' : 'O') << " place: ";
			cin >> x >> y;
		}
		system("cls");

		if(is_x == true) {
			arr[x][y]='X';
		}else {
			arr[x][y]='O';
		}
		winner=Winner_Check(arr);
		Shape(arr);
		if (winner) {
			cout << "The winner is " << (is_x ? 'X' : 'O') << "!" << endl;
			cout << "Do you want play again(0/1)? ";
			cin >> play_again;
			while (play_again < 0 || play_again >1) {
				cout << "sorry, Do you want play again(0/1)? ";
				cin >> play_again;
			}
		}
		is_x = !is_x;

		if (play_again) {
			winner = false;
			is_x = true;
			counter = 0;
			system("cls");
			empty_array(arr);
			Shape(arr);
			play_again = !play_again;
		}

		if (counter == 8) {
			cout << "Draw!";
		}

		counter++;
	} while (!winner && counter<9);

}

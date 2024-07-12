#include <iostream>
using namespace std;

/*
* * * * * *
* * * * * *
* *     * *
* *     * *
* * * * * *
* * * * * *

*       *
* *   * *   
*   *   *   
*       *    
*       *
 


*/

int main() {
	int hight = 6;
	for (int i = 0; i < hight; i++) {
		if (i == hight / 2-1 || i == hight / 2) {
			for (int j = 0; j < hight; j++) {
				if (j == hight / 2-1 || j == hight / 2) {
					cout << "  ";
				}
				else {
					cout << "* ";
				}
			}
		}else {
			for (int j = 0; j < hight; j++) {
				cout << "* ";
			}
		}
		cout << endl;
	}

	cout << endl;
	hight = 5;
	for (int i = 0; i < hight; i++) {
		for (int j = 0; j < hight; j++) {
			if (j == 0 || j == hight - 1 || (i==2 && j==hight/2) || (i == 1 && j == hight / 2-1) || (i == 1 && j == hight / 2+1)) {
				cout << "* ";
			}
			else {
				cout << "  ";
			}
		}
		cout << endl;
	}
	cout << endl;
}

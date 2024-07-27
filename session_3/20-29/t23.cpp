#include <iostream>
using namespace std;

/*
(i=2)(j=2) (j<=1)
*/

int main() {
	int hight;
	cout << "hight: ";
	cin >> hight;
	int stars= hight;

	cout << string(hight * 2, '-') << endl;
	for (int i = 0; i < hight; i++) {
		for(int j=stars;j>0;j--){
			cout << "* ";
		}
		stars--;
		cout << endl;
	}
	cout << string(hight * 2, '-') << endl;

}
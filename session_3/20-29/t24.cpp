#include <iostream>
using namespace std;

/*
(i=2)(j=2) (j<=1)
*/

int main() {
	int hight;
	cout << "hight: ";
	cin >> hight;
	

	cout << string(hight * 2, '-') << endl;
	for (int i = 0; i < hight; i++) {
		for(int j= hight;j>0;j--){
			cout << "* ";
		}
		cout << endl;
	}
	cout << string(hight * 2, '-') << endl;

}
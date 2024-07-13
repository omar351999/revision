#include <iostream>
using namespace std;

void printText(string txt,int nums) {
	while (nums > 0) {
		cout << txt << endl;
		nums--;
	}
};

int main() {
	printText("Hello",1);
	cout << "----------------------\n";
	printText("Hello",5);
	cout << "----------------------\n";
	printText("Hello",3);
}
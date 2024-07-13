#include <iostream>
using namespace std;

int main() {
	char arr[11] = { 'm', 'K', 'r', 'a', 'O', 'l', 'h', 'a', ' ', 'e', 'd' };
	string name = "Omar Khaled";
	
	for (int i = 0; i < name.size(); i++) {
		for (int k = 0; k < sizeof(arr) / sizeof(arr[0]); k++) {
			if (arr[k] == name[i]) {
				cout << arr[k];
				break;
			}
		}
	}
	cout << endl;
}

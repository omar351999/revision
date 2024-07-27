#include <iostream>
#include <string>
using namespace std;

int main() {
	string str = "Hello World";
	int counter = 0;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a' && str[i] == 'e' && str[i] == 'i' && str[i] == 'o' && str[i] == 'u') {
			counter++;
		}
	}
	cout << counter;
}
#include <iostream>
//#include <string>
using namespace std;

string reverse_string(string input) {
	string str;
	for (int i = input.size() - 1; i >= 0; i--) {
		str.push_back(input[i]);
	}
	return str;
}

int main() {
	string input = "Hello, World!";
	string reversed = reverse_string(input);
	cout << reversed << endl;
	// reversed should be "!dlroW ,olleH"


}
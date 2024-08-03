#include <iostream>
#include <string>
using namespace std;

bool checker_value(int num, int guess) {
	if (num != guess) {
		return false;
	}
	return true;
}

string String_Result(int num ,int guess) {
	if (num > guess) {
		return to_string(guess) + " ,Too high! Try again.";
	}
	else if (num < guess) {
		return to_string(guess) + " ,Too low! Try again.";
	}
	return "Correct! The number was " + to_string(guess);
}


int main() {
	int num = 63, guess;
	bool isTrue = true;
	
	do {
		cout << "Guess Number between 1 and 100: ";
		cin >> guess;
		cout << String_Result(num,  guess) << endl;
		if (checker_value(num, guess)) {
			isTrue = false;
		}
	} while (isTrue);
}
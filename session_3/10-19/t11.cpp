#include <iostream>
using namespace std;

int main() {
    int num = 28;
	
	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
		cout << i << " ";
		}
	}
}
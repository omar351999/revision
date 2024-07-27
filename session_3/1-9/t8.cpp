#include <iostream>
using namespace std;

int main() {
    int Reverse=0;
    int num = 12345;

    while (num) {
        Reverse = num % 10 + Reverse * 10;
        num /= 10;
    }
    cout << Reverse << endl;
}
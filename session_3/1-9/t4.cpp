#include <iostream>
using namespace std;

int main() {
    int num = 5;
    int Factorial = 1;

    for (int i = num ; i > 0 ; i--) {
        Factorial *= num;
        num--;
    }
    cout << Factorial << endl;
}
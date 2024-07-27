#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int num = 12345;

    while (num) {
        count++;
        num /= 10;
    }
    cout << count << endl;
}
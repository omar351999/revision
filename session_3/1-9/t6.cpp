#include <iostream>
using namespace std;

int main() {
    int odd_sum = 0;
    int num = 50;

    for (int i = 0; i < num; i++) {
        if (i % 2) {
            odd_sum += i;
        }
    }
    cout << odd_sum << endl;
}
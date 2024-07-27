#include <iostream>
using namespace std;

int main() {
    int num = 20;

    for (int i = 1; i <= num; i++) {
        if (!(i & 1)) {
            cout << i << " ";
        }
    }
    cout << endl;
    for (int i = 1; i <= num; i++) {
        if (!(i % 2)) {
            cout << i << " ";
        }
    }
}
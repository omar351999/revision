#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int num = 10;

    for (int i = num ; i>0 ; i--) {
        sum += num;
        num--;
    }
    cout << sum << endl;
}
#include <iostream>
using namespace std;



int main() {
    int pre = 0;
    int next = 1;
    int temp;

    for (int i = 0; i < 10; i++) {
        if (i == 0) {
            cout << pre << " ";
        }
        else if (i == 1) {
            cout << next << " ";
        }
        else {
            cout << pre + next << " ";
            temp = pre;
            pre = next;
            next += temp;
        }
    }

}
#include <iostream>
using namespace std;

int main() {	
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;

    //int stars = 1;
    //int space=rows-1;

    cout << string((rows * 2), '-') << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows - (i+1); j++) {
            cout << " ";
        }
        for (int j = 0; j < i+1; j++) {
            if (i == rows - 1 || j==0 || j==i ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << string((rows * 2), '-') << endl;
}
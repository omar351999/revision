#include <iostream>
using namespace std;

// solution from : https://www.sanfoundry.com/cpp-program-print-pascal-triangle/
int main() {	
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    cout << endl;


    for (int i = 0; i < rows; i++)
    {
        int val = 1;
        for (int j = 1; j < (rows - i); j++)
        {
            cout << "  ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << val <<"   ";
            val = val * (i - k) / (k + 1);
        }
        cout << endl;
    }
    /*
    (i=3)(j=0) => 1 => v=3
    (i=3)(j=1) => 3 => v=3
    (i=3)(j=2) => 3 => v=1
    (i=3)(j=3) => 1
    */
}
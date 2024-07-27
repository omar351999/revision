#include <iostream>
using namespace std;

int main() {	
    int n = 5, a = 2, d = 3;
    int sum = 0;

    for (int i = n; i>0; i--)
    {
        sum += a + (i - 1) * d;
    }
    cout << "Sum of the first " << n << " terms of the arithmetic series is " << sum << endl;
}
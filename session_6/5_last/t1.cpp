#include <iostream>
using namespace std;

void swap_pointers(int* frist, int* sec) {
	*frist = *frist * *sec; //a=50 (5*10)    
	*sec = *frist / *sec; //a=50 (5*10)    
	*frist = *frist / *sec; //a=50 (5*10)

	cout << "after:\t";
	cout << *frist << " " << *sec << endl;
}

int main() {
	int a = 5;
	int b = 10;

	int* ptrA = &a;
	int* ptrB = &b;

	cout << "before:\t";
	cout << *ptrA << " " << *ptrB << endl;
	swap_pointers(ptrA, ptrB);

}
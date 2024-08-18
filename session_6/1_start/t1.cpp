#include <iostream>
using namespace std;

int main() {
	int num=10;
	int* ptr_var = &num;
	cout << "num value= " << num << endl;
	cout << "num address= " << &num << endl;
	cout << "ptr_var value= " << ptr_var << endl;
	cout << "ptr_var value address= " << *ptr_var << endl;
	cout << "ptr_var address= " << &ptr_var << endl;
	
}
#include <iostream>
using namespace std;

int main() {
	int num_1 =10;
	int* ptr_v1= &num_1;
	int* ptr_v2 = ptr_v1;
	int num_2 = *ptr_v2;

	cout << "num_1= " << num_1 << endl;
	cout << "num_2= " << num_2 << endl;

	cout << "&num_1= " << &num_1 << endl;
	cout << "&num_2= " << &num_2 << endl;

	cout << "ptr_v1= " << ptr_v1 << endl;
	cout << "ptr_v2= " << ptr_v2 << endl;

	cout << "*ptr_v1= " << *ptr_v1 << endl;
	cout << "*ptr_v2= " << *ptr_v2 << endl;

	cout << "&ptr_v1= " << &ptr_v1 << endl;
	cout << "&ptr_v2= " << &ptr_v2 << endl;
	
	cout << "-------------------------" << endl;
	num_1 = 55;

	cout << "num_1= " << num_1 << endl;
	cout << "num_2= " << num_2 << endl;

	cout << "&num_1= " << &num_1 << endl;
	cout << "&num_2= " << &num_2 << endl;

	cout << "ptr_v1= " << ptr_v1 << endl;
	cout << "ptr_v2= " << ptr_v2 << endl;

	cout << "*ptr_v1= " << *ptr_v1 << endl;
	cout << "*ptr_v2= " << *ptr_v2 << endl;

	cout << "&ptr_v1= " << &ptr_v1 << endl;
	cout << "&ptr_v2= " << &ptr_v2 << endl;
}
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main() {
	int num;
	cout << "num: ";
	cin >> num;
	
	int sum = 0,num2=num;
	int count = to_string(num).size();

	/*
	sum= 27;
	num= 15;

	sum= 152;
	num= 1;

	sum= 153;
	num= 0;
	*/

	while (num)
	{
		sum +=pow ((num % 10) , count);
		num /= 10;
		//cout << sum <<" => " << num << endl;
	}

	if (num2 == sum) {
		cout << num2 << " is an Armstrong number." << endl;
	}
	else {
		cout << num2 << " is not Armstrong!" << endl;
	}
}
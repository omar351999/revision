#include <iostream>
#include <string>
#include "Book.h";
using namespace std;

int main() {
	Book books[3];
	books[0].setAuthor("Elisa");
	books[0].setTitle("love story");
	books[0].setISBN("1-23-456");

	books[1].setAuthor("Yosra");
	books[1].setTitle("michel in mars");
	books[1].setISBN("123-456-789");

	books[2].setAuthor("Mohamed");
	books[2].setTitle("Machine learning");
	books[2].setISBN("1-2-3-4-5");

	for (int i = 0; i < 3; i++) {
		books[i].displayInfo();
		cout << "-------------------" << endl;
	}
}
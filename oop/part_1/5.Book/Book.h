#pragma once
#include <string>
using namespace std;

class Book
{
private:
	string title, author, ISBN;

public:
	void setTitle(string t);
	void setAuthor(string a);
	void setISBN(string isbn);
	string getTitle();
	string getAuthor();
	string getISBN();

	void displayInfo();
};

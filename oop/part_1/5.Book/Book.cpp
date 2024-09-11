#include <string>
#include <iostream>
#include "Book.h";
using namespace std;

void Book::setTitle(string t)
{
	title = t;
}

void Book::setAuthor(string a)
{
	author = a;
}

void Book::setISBN(string isbn)
{
	ISBN = isbn;
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return author;
}

string Book::getISBN()
{
	return ISBN;
}

void Book::displayInfo()
{
	cout << "Title: " << getTitle() << endl;
	cout << "Author: " << getAuthor() << endl;
	cout << "ISBN: " << getISBN() << endl;
}

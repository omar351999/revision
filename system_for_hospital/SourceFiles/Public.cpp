#include <iostream>
#include <vector>
#include "Public.h";
using namespace std;

void add_personal_data(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, int& counter) {
	string name;
	int id, age;

	cout << "name: ";
	cin >> name;
	names_arr.push_back(name);

	cout << "id: ";
	cin >> id;
	for (int i = 0; i < id_arr.size(); i++) {
		while (id_arr.at(i)==id) {
			cout << "input another ID: ";
			cin >> id;
		}
	}
	id_arr.push_back(id);

	cout << "age: ";
	cin >> age;
	age_arr.push_back(age);
}

int Search_by_ID(int id, vector <int>& id_arr) {
	for (int i = 0; i < id_arr.size(); i++) {
		if (id_arr.at(i) == id) {
			return i;
		}
	}
	return -1;
}

void Display_personal_data(vector <string> names_arr, vector <int> id_arr, vector <int> age_arr, int index) {
	cout << "name: " << names_arr.at(index) << "\t,";
	cout << "id: " << id_arr.at(index) << "\t,";
	cout << "age: " << age_arr.at(index) << "\t,";
}
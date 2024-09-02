#include <iostream>
#include <vector>
#include "Doctor.h";
#include "Public.h";
using namespace std;

void Add_Doctor(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter) {
	add_personal_data(names_arr, id_arr, age_arr, counter);

	string major;
	int experance;
	cout << "major: ";
	cin >> major;
	major_arr.push_back(major);

	cout << "experance: ";
	cin >> experance;
	experance_arr.push_back(experance);
	cout << "---------------------" << endl;
	counter++;
}

void Items_doctor_for_update() {
	cout << string(30, '-') << endl;
	cout << "1) update name" << endl;
	cout << "2) update age" << endl;
	cout << "3) update major" << endl;
	cout << "4) update experance" << endl;
	cout << string(30, '-') << endl;
}

void Upgrade_Doctor_Data(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr) {
	int index = Search_by_ID(id, id_arr);
	
	if (index != -1) {
		Items_doctor_for_update();
		int update_item;
		cout << "Your choose: ";
		cin >> update_item;

		while (update_item < 1 || update_item > 4) {
			cout << "Not valid item!" << endl;
			Items_doctor_for_update();
			cout << "Your choose again: ";
			cin >> update_item;
		}

		switch (update_item)
		{
		case 1:
			cout << "Input new name: ";
			cin >> names_arr.at(index);
			break;
		case 2:
			cout << "Input new age: ";
			cin >> age_arr.at(index);
			break;
		case 3:
			cout << "Input new major: ";
			cin >> major_arr.at(index);
			break;
		case 4:
			cout << "Input new experance: ";
			cin >> experance_arr.at(index);
			break;

		default:
			cout << "Not valid Update" << endl;
			break;
		}

	}else {
		cout << "not valid ID!" << endl;;
	}
}

void Display_All_Doctor(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter) {
	cout << "{\n";
	for (int i = 0; i < counter; i++) {
		cout << "\t{";
		Display_personal_data(names_arr, id_arr, age_arr, i);
		cout << "major: " << major_arr.at(i) << "\t,";
		cout << "experance: " << experance_arr.at(i);
		cout << "}" << (i != counter - 1?",":"")<<endl;
	}
	cout << "}\n";
}

void Delete_doctor_by_ID(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter) {
	int index = Search_by_ID(id, id_arr);
	if (index != -1) {
		names_arr.erase(names_arr.begin() + index);
		age_arr.erase(age_arr.begin() + index);
		major_arr.erase(major_arr.begin() + index);
		experance_arr.erase(experance_arr.begin() + index);
		id_arr.erase(id_arr.begin() + index);
		counter--;
	}else {
		cout << "not valid id,can not found this item!" << endl;
	}
}

void Delete_all_doctors_data(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter) {
	names_arr.clear();
	id_arr.clear();
	age_arr.clear();
	major_arr.clear();
	experance_arr.clear();
	counter = 0;
}
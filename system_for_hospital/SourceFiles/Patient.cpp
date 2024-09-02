#include <iostream>
#include <vector>
#include "Patient.h";
#include "Schedule.h";
#include "Public.h";
using namespace std;

void Add_Patient(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& Schedule, int& counter) {
	add_personal_data(names_arr, id_arr, age_arr, counter);

	string diagnosis;
	cout << "diagnosis: ";
	cin >> diagnosis;
	Diagnosis_arr.push_back(diagnosis);

	int Hours;
	cout << "Hours stay: ";
	cin >> Hours;
	Hours_stay_arr.push_back(Hours);
	Add_an_appointment(Schedule);
	cout << "---------------------" << endl;
	counter++;
}

void Items_patient_for_update() {
	cout << string(30, '-') << endl;
	cout << "1) update name" << endl;
	cout << "2) update age" << endl;
	cout << "3) update diagnosis" << endl;
	cout << "4) update stay time" << endl;
	cout << "5) update appointment" << endl;
	cout << string(30, '-') << endl;
}

void Upgrade_patient_Data(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& Schedule) {
	
	// before update return the index of this id to update
	int index = Search_by_ID(id, id_arr);

	if (index != -1) {
		Items_patient_for_update();
		int update_item;
		cout << "Your choose: ";
		cin >> update_item;

		while (update_item < 1 || update_item > 5) {
			cout << "Not valid item!" << endl;
			Items_patient_for_update();
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
			cout << "Input new diagnosis: ";
			cin >> Diagnosis_arr.at(index);
			break;
		case 4:
			cout << "Input new Time: ";
			cin >> Hours_stay_arr.at(index);
			break;		
		case 5:
			Update_appointment(index, Schedule);
			break;

		default:
			cout << "Not valid Update" << endl;
			break;
		}

	}
	else {
		cout << "not valid ID!" << endl;;
	}
}

void Display_All_Patient(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& schedule_arr, int& counter) {
	cout << "{\n";
	for (int i = 0; i < counter; i++) {
		cout << "\t{";
		Display_personal_data(names_arr, id_arr, age_arr, i);
		cout << "diagnosis: " << Diagnosis_arr.at(i) << "\t,";
		cout << "Time: " << Hours_stay_arr.at(i) << "\t,";;
		cout << "appointment: " << schedule_arr.at(i);
		cout << "}" << (i != counter - 1 ? "," : "") << endl;
	}
	cout << "}\n";
}

void Delete_patient_by_ID(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& schedule_arr, int& counter) {
	int index = Search_by_ID(id, id_arr);
	if (index != -1) {
		names_arr.erase(names_arr.begin() + index);
		age_arr.erase(age_arr.begin() + index);
		Diagnosis_arr.erase(Diagnosis_arr.begin() + index);
		Hours_stay_arr.erase(Hours_stay_arr.begin() + index);
		id_arr.erase(id_arr.begin() + index);
		schedule_arr.erase(schedule_arr.begin() + index);
		counter--;
	}
	else {
		cout << "not valid id,can not found this item!" << endl;
	}
}

void Delete_all_patient_data(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& schedule_arr, int& counter) {
	names_arr.clear();
	id_arr.clear();
	age_arr.clear();
	Diagnosis_arr.clear();
	Hours_stay_arr.clear();
	schedule_arr.clear();
	counter = 0;
}
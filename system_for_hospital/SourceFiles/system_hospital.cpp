#include <iostream>
#include <vector>
#include <string>
#include "Doctor.h";
#include "Nurse.h";
#include "patient.h";
#include "Schedule.h";
#include "Public.h";

using namespace std;

// person counter
int doctor_counter = 0;
int nurse_counter = 0;
int patient_counter = 0;

// Doctors vectors
vector <string> Doc_Names;
vector <int> Doc_id;
vector <int> Doc_age;
vector <string> Doc_Major;
vector <int> Doc_exp_years;

// Nurses vectors
vector <string> Nurse_Names;
vector <int> Nurse_id;
vector <int> Nurse_age;
vector <string> Nurse_Major;
vector <int> Nurse_exp_years;

// patient vectors
vector <string> patient_Names;
vector <int> patient_id;
vector <int> patient_age;
vector <string> patient_Diagnosis;
vector <int> patient_Hours_stay;

// Schedule vectors
vector <string> Schedule;

void Choose_System() {
	cout << "Choose one of the following systems: " << endl;
	cout << "1) Doctor." << endl;
	cout << "2) Nurse." << endl;
	cout << "3) Patient." << endl;
	cout << "4) Schedule." << endl;
	cout << string(30, '-') << endl;
}

void System_Choosen(int system_number) {
	system("cls");
	cout << "Welcome to the ";
	if (system_number == 1) {
		cout << "(Doctors) ";
	}else if (system_number == 2) {
		cout << "(Nurses) ";
	}else if (system_number == 3) {
		cout << "(Patients) ";
	}else {
		cout << "(Schedule) ";
	}

	cout << "system." << endl;
}

void Choose_Operation() {
	cout << "Choose operation from the following: " << endl;
	cout << "1) Add." << endl;
	cout << "2) Update." << endl;
	cout << "3) Search_by_ID." << endl;
	cout << "4) Display all data." << endl;
	cout << "5) Delete_by_ID." << endl;
	cout << "6) Delete all data." << endl;
	cout << string(30, '-') << endl;
}

void Operation_Choosen(int i) {
	switch (i)
	{
	case 1:
		cout << "Add operation: " << endl;
		break;
	case 2:
		cout << "Update operation: " << endl;
		break;
	case 3:
		cout << "Search_by_ID operation: " << endl;
		break;
	case 4:
		cout << "Display all data operation: " << endl;
		break;
	case 5:
		cout << "Delete_by_ID operation: " << endl;
		break;
	case 6:
		cout << "Delete all data operation: " << endl;
		break;
	default:
		cout << "Not valid operation!" << endl;
		break;
	}
}

bool Ask_change_system() {
	bool new_or_not;
	cout << "Do you want change system(0 or 1)? ";
	cin >> new_or_not;
	return new_or_not;
}

bool Ask_new_operation() {
	bool new_or_not;
	cout << "Do you want create new operation(0 or 1)? ";
	cin >> new_or_not;
	return new_or_not;
}

int main() {
	int system_number;
	bool choose_new_system = true;

	do {
	//  ÚÑÖ ßá ÇáÇäÙãÉ ÇáãæÌæÏÉ æØáÈ ãä ÇáãÓÊÎÏã ÇÏÎÇá ÇáäÙÇã
	Choose_System();
	cout << "Your choose: ";
	cin >> system_number;

	// ÇÎÊíÇÑ äÙÇã ãä ÇáÇäÙãÉ ÇáãæÌæÏÉ æÇáÊÃßÏ ãä æÌæÉ
	while (system_number < 1 || system_number > 4) {
		system("cls");
		cout << "Sorry Not valid system!" << endl;
		Choose_System();
		cout << "Your choose: ";
		cin >> system_number;
	}

	// ØÈÇÚÉ ÇáäÙÇã ÇáĞí Êã ÇÎÊíÇÑÉ
	System_Choosen(system_number);

	bool new_operation = true;
	int operation_number;
	do
	{
		// ÇÎÊíÇÑ ÇáÚãáíÉ ÇáãÑÇÏ ÊäİíĞåÇ æÇáÊÃßÏ ãä ÇáÑŞã ÇáĞí Êã ÇÏÎÇáÉ
		Choose_Operation(); 
		cout << "Choose operation: ";
		cin >> operation_number;
		while (operation_number < 1 || operation_number > 6) {
			Choose_Operation();
			cout << "Choose operation: ";
			cin >> operation_number;
		}
		System_Choosen(system_number);

		// ØÈÇÚÉ ÇáÚãáíÉ ÇáÊí Êã ÇÎÊíÇÑåÇ
		Operation_Choosen(operation_number);

		if (system_number == 1) {
			// doctor system
			switch (operation_number)
			{
			case 1:
				Add_Doctor(Doc_Names, Doc_id, Doc_age, Doc_Major, Doc_exp_years, doctor_counter);
				break;
			case 2:
				int id;
				cout << "Enter ID for Update: ";
				cin >> id;
				Upgrade_Doctor_Data(id, Doc_Names, Doc_id, Doc_age, Doc_Major, Doc_exp_years);
				break;
			case 3:
				int id_search;
				int found;
				cout << "Enter ID for search: ";
				cin >> id_search;
				found = Search_by_ID(id_search, Doc_id);
				cout << (found != -1 ? ("founded in index= " + found) : "Not founded.") << endl; 
				break;
			case 4:
				Display_All_Doctor(Doc_Names, Doc_id, Doc_age, Doc_Major, Doc_exp_years, doctor_counter);
				break;
			case 5:
				int id_del;
				cout << "Enter ID for delete: ";
				cin >> id_del;
				Delete_doctor_by_ID(id_del,Doc_Names, Doc_id, Doc_age, Doc_Major, Doc_exp_years, doctor_counter);
				break;
			case 6:
				Delete_all_doctors_data(Doc_Names, Doc_id, Doc_age, Doc_Major, Doc_exp_years, doctor_counter);
				break;
			default:
				cout << "Not valid operation!" << endl;
				break;
			}
		}
		else if (system_number == 2) { 
			// Nurse system
			switch (operation_number)
			{
			case 1:
				Add_Nurse(Nurse_Names, Nurse_id, Nurse_age, Nurse_Major, Nurse_exp_years, nurse_counter);
				break;
			case 2:
				int id;
				cout << "Enter ID for Update: ";
				cin >> id;
				Upgrade_Nurse_Data(id, Nurse_Names, Nurse_id, Nurse_age, Nurse_Major, Nurse_exp_years);
				break;
			case 3:
				int id_search;
				int found;
				cout << "Enter ID for search: ";
				cin >> id_search;
				found = Search_by_ID(id_search, Nurse_id);
				cout << (found != -1 ? ("founded in index= " + found) : "Not founded.") << endl;
				break;
			case 4:
				Display_All_Nurse(Nurse_Names, Nurse_id, Nurse_age, Nurse_Major, Nurse_exp_years, nurse_counter);
				break;
			case 5:
				int id_del;
				cout << "Enter ID for delete: ";
				cin >> id_del;
				Delete_nurse_by_ID(id_del, Nurse_Names, Nurse_id, Nurse_age, Nurse_Major, Nurse_exp_years, nurse_counter);
				break;
			case 6:
				Delete_all_nurse_data(Nurse_Names, Nurse_id, Nurse_age, Nurse_Major, Nurse_exp_years, nurse_counter);
				break;
			default:
				cout << "Not valid operation!" << endl;
				break;
			}
		}
		else if(system_number == 3){
			// Patient system
			switch (operation_number)
			{
			case 1:
				Add_Patient(patient_Names, patient_id, patient_age, patient_Diagnosis, patient_Hours_stay, Schedule, patient_counter);
				Add_an_appointment(Schedule);
				break;
			case 2:
				int id;
				cout << "Enter ID for Update: ";
				cin >> id;
				Upgrade_patient_Data(id, patient_Names, patient_id, patient_age, patient_Diagnosis, patient_Hours_stay, Schedule);
				break;
			case 3:
				int id_search;
				int found;
				cout << "Enter ID for search: ";
				cin >> id_search;
				found = Search_by_ID(id_search, patient_id);
				cout << (found != -1 ? ("founded in index= " + found) : "Not founded.") << endl;				
				break;
			case 4:
				Display_All_Patient(patient_Names, patient_id, patient_age, patient_Diagnosis, patient_Hours_stay, Schedule, patient_counter);
				break;
			case 5:
				int id_del;
				cout << "Enter ID for delete: ";
				cin >> id_del;
				Delete_patient_by_ID(id_del, patient_Names, patient_id, patient_age, patient_Diagnosis, patient_Hours_stay, Schedule, patient_counter);
				break;
			case 6:
				Delete_all_patient_data(patient_Names, patient_id, patient_age, patient_Diagnosis, patient_Hours_stay, Schedule, patient_counter);
				break;
			default:
				cout << "Not valid operation!" << endl;
				break;
			}
		}
		else {
			// Schedule system
			cout << "Schedule system: " << endl;
			switch (operation_number)
			{
			case 1:
				cout << "Before adding appointment, you should add patient: " << endl;
				Add_Patient(patient_Names, patient_id, patient_age, patient_Diagnosis, patient_Hours_stay, Schedule, patient_counter);
				break;
			case 2:
				int id_update;
				int index;
				cout << "Enter ID for Schedule Update: ";
				cin >> id_update;
				index = Search_by_ID(id_update, patient_id);
				if (index != -1) { Update_appointment(index, Schedule); }else {cout << "sorry, not valid ID";}
				break;
			case 3:
				cout << Search_an_appointment(Schedule) << endl;
				break;
			case 4:
				Display_Schedule(Schedule);
				break;
			case 5:
				int id_del;
				cout << "You will delete the patient and appointment." << endl;
				cout << "Enter ID for delete: ";
				cin >> id_del;
				Delete_patient_by_ID(id_del, patient_Names, patient_id, patient_age, patient_Diagnosis, patient_Hours_stay, Schedule, patient_counter);
				break;
			case 6:
				Delete_all_appointment_data(Schedule);
				break;
			default:
				cout << "Not valid operation!" << endl;
				break;
			}
		}

		new_operation = Ask_new_operation();
	} while (new_operation);
	choose_new_system = Ask_change_system();
	} while (choose_new_system);
}
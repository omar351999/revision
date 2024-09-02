#include <iostream>
#include <vector>
#include <string>
#include "Schedule.h"
#include "Patient.h";
#include "Public.h";

using namespace std;

void months_chooses() {
	cout << string(30, '-') << endl;
	cout << "1)Jan" << "\t";
	cout << "2)Feb" << "\t";
	cout << "3)Mar" << "\t";
	cout << "4)Apr" << endl;
	cout << "5)May" << "\t";
	cout << "6)Jun" << "\t";
	cout << "7)Jul" << "\t";
	cout << "8)Aug" << endl;
	cout << "9)Sep" << "\t";
	cout << "10)Oct" << "\t";
	cout << "11)Nov" << "\t";
	cout << "12)Dec" << endl;
	cout << string(30, '-') << endl;
}

void days(int year, int month) {
	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
	cout << string(30, '-') << endl;
		for (int i = 0; i < 31; i++) {
			cout << i + 1 << ") " << i + 1 << ((i + 1) % 5 == 0 ? '\n' : '\t');
		}
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11) {
		for (int i = 0; i < 30; i++) {
			cout << i + 1 << ") " << i + 1 << ((i + 1) % 5 == 0 ? '\n' : '\t');
		}
	}
	else {

		if (year % 4 == 0) {
			for (int i = 0; i < 29; i++) {
				cout << i + 1 << ") " << i + 1 << ((i + 1) % 5 == 0 ? '\n' : '\t');
			}
		}
		else {
			for (int i = 0; i < 28; i++) {
				cout << i + 1 << ") " << i + 1 << ((i + 1) % 5 == 0 ? '\n' : '\t');
			}
		}
	}
	cout << endl;
	cout << string(30, '-') << endl;
}

// ÇÖÇİÉ ãæÚÏ
void Add_an_appointment(vector <string> &Schedule) {
	cout << "Add schedule: " << endl;
	string exmintion_date;
	
	int current_year=2024;
	int year;
	int month;
	int day;

	// ÇÏÎÇá ÇáÓäÉ æÇáÊÃßÏ ãäåÇ
	cout << "year(2024): ";
	cin >> year;
	while (year < current_year || year > current_year+5) {
		cout << "min year "<< current_year <<" and max year is "<< current_year + 5 << " choose again: ";
		cin >> year;
	}

	// ÚÑÖ ÇáÔåæÑ ÇáãÊÇÍÉ æÇÏÎÇá ŞíãåÇ
	months_chooses();
	cout << "Month number: ";
	cin >> month;
	while (month < 1 || month>12) {
		cout << "Month number again: ";
		cin >> month;
	}

	// ÇÏÎÇá Çáíæã æÇáÊÃßÏ ãäå
	days(year,month);
	cout << "day: ";
	cin >> day;
	while (day > 31 || day < 1) {
		cout << "day again: ";
		cin >> day;
	}
	exmintion_date = to_string(day) + '-' + to_string(month) + '-' + to_string(year);
	cout << exmintion_date << endl;
	// ÇáÊÃßÏ ãä ÚÏã æÌæÏ åĞÇ ÇáãæÚÏ ãä ŞÈá
	for (int i = 0; i < Schedule.size(); i++) {
		if (Schedule[i] == exmintion_date) {
			cout << "Not valid date!" << endl;
			return;
		}
	}
	Schedule.push_back(exmintion_date);
}

// ÊÍÏíË ÇáãæÚÏ
void Update_appointment(int index, vector <string>& Schedule) {
	cout << "Update schedule: " << endl;
	string exmintion_date;

	int current_year = 2024;
	int year;
	int month;
	int day;

	// ÇÏÎÇá ÇáÓäÉ æÇáÊÃßÏ ãäåÇ
	cout << "year(2024): ";
	cin >> year;
	while (year < current_year || year > current_year + 5) {
		cout << "min year " << current_year << " and max year is " << current_year + 5 << " choose again: ";
		cin >> year;
	}

	// ÚÑÖ ÇáÔåæÑ ÇáãÊÇÍÉ æÇÏÎÇá ŞíãåÇ
	months_chooses();
	cout << "Month number: ";
	cin >> month;
	while (month < 1 || month>12) {
		cout << "Month number again: ";
		cin >> month;
	}

	// ÇÏÎÇá Çáíæã æÇáÊÃßÏ ãäå
	days(year, month);
	cout << "day: ";
	cin >> day;
	while (day > 31 || day < 1) {
		cout << "day again: ";
		cin >> day;
	}
	
	// ÊÎÒíä ŞíãÉ ÇáÊÇÑíÎ ÈÇáßÇãá
	exmintion_date = to_string(day) + '-' + to_string(month) + '-' + to_string(year);
	
	// ÇáÊÃßÏ ãä ÚÏã ÇÖÇİÉ åĞÇ ÇáÊÇÑíÎ ãÓÈŞÇ
	for (int i = 0; i < Schedule.size(); i++) {
		if (Schedule[i] == exmintion_date) {
			cout << "Not valid date!" << endl;
			return;
		}
	}
	Schedule.at(index) = exmintion_date;
}

// ÇáÈÍË Úä æÌæÏ ãæÚÏ
string Search_an_appointment(vector <string>& Schedule) {
	string app;
	cout << "Enter appointment for search like(1-1-2024): ";
	cin >> app;
	for (int i = 0; i < Schedule.size(); i++) {
		if (app == Schedule.at(i)) {
			return "this appointment is founded.";
		}
	}
	return "This appointment not founded!";
}

//  ÚÑÖ ßá ÇáãæÇÚíÏ
void Display_Schedule(vector <string>& Schedule) {
	for (int i = 0; i < Schedule.size(); i++) {
		cout << "Date " << i + 1 << ": " << Schedule.at(i) << endl;
	}
}

// ÍĞİ ãæÚÏ
void Delete_appointment(int index, vector <string>& Schedule) {
	Schedule.erase(Schedule.begin() + index);
}

// ÍĞİ ßá ÇáãæÇÚíÏ
void Delete_all_appointment_data(vector <string>& Schedule) {
	Schedule.clear();
}
#ifndef Patient_FUNCTION
#define Patient_FUNCTION

#include <iostream>
#include <vector>
using namespace std;

void Add_Patient(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& Schedule, int& counter);
void Upgrade_patient_Data(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& Schedule);
void Display_All_Patient(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& schedule_arr, int& counter);
void Delete_patient_by_ID(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& schedule_arr, int& counter);
void Delete_all_patient_data(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& Diagnosis_arr, vector <int>& Hours_stay_arr, vector <string>& schedule_arr, int& counter);
#endif // Patient_FUNCTION
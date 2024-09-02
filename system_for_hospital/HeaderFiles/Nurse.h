#ifndef NURSE_FUNCTION
#define NURSE_FUNCTION

#include <iostream>
#include <vector>
using namespace std;

void Add_Nurse(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter);
void Upgrade_Nurse_Data(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr);
void Display_All_Nurse(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter);
void Delete_nurse_by_ID(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter);
void Delete_all_nurse_data(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter);

#endif // NURSE_FUNCTION
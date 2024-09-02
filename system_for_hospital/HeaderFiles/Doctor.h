#ifndef Doctor_FUNCTION
#define Doctor_FUNCTION

#include <iostream>
#include <vector>
using namespace std;


void Add_Doctor(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter);
void Upgrade_Doctor_Data(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr);
void Display_All_Doctor(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter);
void Delete_doctor_by_ID(int id, vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter);
void Delete_all_doctors_data(vector <string>& names_arr, vector <int>& id_arr, vector <int>& age_arr, vector <string>& major_arr, vector <int>& experance_arr, int& counter);

#endif // Doctor_FUNCTION
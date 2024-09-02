#ifndef Schedule_FUNCTION
#define Schedule_FUNCTION

#include <iostream>
#include <vector>
using namespace std;

void Add_an_appointment(vector <string>& Schedule);
void Update_appointment(int index, vector <string>& Schedule);
string Search_an_appointment(vector <string>& Schedule);
void Display_Schedule(vector <string>& Schedule);
void Delete_appointment(int index, vector <string>& Schedule);
void Delete_all_appointment_data(vector <string>& Schedule);

#endif // Schedule_FUNCTION
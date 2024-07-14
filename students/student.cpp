#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> names_vec;
vector<int> id_vec;
vector<int> age_vec;
vector<int> level_vec;
vector<int> gpa_vec;

void add_student(string name,int id,int age,int level,int gpa) {
	names_vec.push_back(name);
	id_vec.push_back(id);
	age_vec.push_back(age);
	level_vec.push_back(level);
	gpa_vec.push_back(gpa);
}

void Display() {
	for (int i = 0; i < names_vec.size(); i++) {
		cout << "name: " << names_vec[i] << ",\tid: " << id_vec[i] << ",\tage: "<< age_vec[i]<<",\tlevel: "<<level_vec[i]<<",\tGPA: "<<gpa_vec[i]<<"%"<<endl;
	}
}

int student_Count() {
	int counter = 0;
	for (int i = 0; i < names_vec.size(); i++) {
		counter++;
	}
	return counter;
}

int SearchById(int id) {
	for (int i = 0; i < id_vec.size(); i++) {
		if (id_vec[i] == id) {
			return i;
		}
	}
	return -1;
}

void Update_data(int id) {
	string name; int age, level, gpa;
	cout << "name: ";
	cin >> name;
	cout << "age: ";
	cin >> age;
	cout << "level: ";
	cin >> level;
	cout << "gpa: ";
	cin >> gpa;

	for (int i = 0; i < id_vec.size(); i++) {
		if (id_vec[i] == id) {
			names_vec[i] = name;
			age_vec[i] = age;
			level_vec[i] = level;
			gpa_vec[i] = gpa;
			break;
		}
	}
	cout << "Data updated!\n";
}

int Delete(int id) {
	for (int i = 0; i < id_vec.size(); i++) {
		if (id_vec[i] == id) {
			names_vec.erase(names_vec.begin() + i);
			id_vec.erase(id_vec.begin() + i);
			age_vec.erase(age_vec.begin() + i);
			level_vec.erase(level_vec.begin() + i);
			gpa_vec.erase(gpa_vec.begin() + i);
			return i;
		}
	}
	return -1;
}

void next_Level() {
	int filed_count = 0;
	cout << "how many student filed? ";
	cin >> filed_count;

	if (filed_count <= id_vec.size()) {
		
		if (filed_count == 0) {
			for (int i = 0; i < level_vec.size(); i++) {
				level_vec[i] += 1;
			}
		}else {
			for (int i = 0; i < level_vec.size(); i++) {
				int id;
				if (filed_count != 0) {
					cout << "please enter id: ";
					cin >> id;
					while (SearchById(id) == -1) {
						cout << "please enter id again: ";
						cin >> id;
					}
					level_vec[SearchById(id)] -= 1;
					filed_count--;
				}
				level_vec[i] += 1;
			}
		}
	}else {
		cout << "sorry you have only " << id_vec.size() << " student." << endl;
	}
}

int main() {

	add_student("yaya", 123456, 25, 2, 90); 
	add_student("momo", 12023, 23, 7, 50);
	add_student("lolo", 199996, 21, 9, 30);

	Display();
	cout << "------------------------" << endl;
	cout << SearchById(199996) << endl;
	cout << SearchById(1) << endl;
	cout << "------------------------" << endl;
	next_Level();
	Display();
}
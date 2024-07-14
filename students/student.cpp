#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<string> names_vec;
vector<int> id_vec;
vector<int> age_vec;
vector<int> level_vec;
vector<int> gpa_vec;

/*اضافة طالب جديد */
void add_student(string name,int id,int age,int level,int gpa) {
	names_vec.push_back(name);
	id_vec.push_back(id);
	age_vec.push_back(age);
	level_vec.push_back(level);
	gpa_vec.push_back(gpa);
}

/* طباع كل الطلاب*/
void Display() {
	for (int i = 0; i < names_vec.size(); i++) {
		cout << "name: " << names_vec[i] << ",\tid: " << id_vec[i] << ",\tage: "<< age_vec[i]<<",\tlevel: "<<level_vec[i]<<",\tGPA: "<<gpa_vec[i]<<"%"<<endl;
	}
}

/* عدد الطلاب الموجودين في المدرسة */
int student_Count() {
	int counter = 0;
	for (int i = 0; i < names_vec.size(); i++) {
		counter++;
	}
	return counter;
}

/* البحث عن طالب محدد */
int SearchById(int id) {
	/* لو الطالب موجود هرجع الترتيب بتاعة في المصفوة واخرج لو مش موجود هيديك رقم سالب */
	for (int i = 0; i < id_vec.size(); i++) {
		if (id_vec[i] == id) {
			return i;
		}
	}
	cout << "not valid id! ";
	return -1;
}

/* تعديل بيانات طالب محدد */
void Update_data(int id) {
	/* طلب من المستخدم ادخال البيانات الجديدة */
	cout << "update " << names_vec[SearchById(id)] << " data with id "<< id<<"!\n";
	

	for (int i = 0; i < id_vec.size(); i++) {
		if (id_vec[i] == id) {
			string name; int age, level, gpa;
			cout << "name: ";
			cin >> name;
			cout << "age: ";
			cin >> age;
			cout << "level: ";
			cin >> level;
			cout << "gpa: ";
			cin >> gpa;

			names_vec[i] = name;
			age_vec[i] = age;
			level_vec[i] = level;
			gpa_vec[i] = gpa;
			break;// اذا وجد الطالب وتم تعديل بيانتة اخرج من التكرار
		}
	}
	cout << "Data updated!\n";
}

/* ازالة طالب محدد */
int Delete(int id) {
	for (int i = 0; i < id_vec.size(); i++) {
		if (id_vec[i] == id) {
			cout << "deleted id " << id <<",name: " << names_vec[i] << " from array!" << endl;
			names_vec.erase(names_vec.begin() + i);
			id_vec.erase(id_vec.begin() + i);
			age_vec.erase(age_vec.begin() + i);
			level_vec.erase(level_vec.begin() + i);
			gpa_vec.erase(gpa_vec.begin() + i);
			return i; // لو موجود احذف جميع بيانتة ورجع ترتيبة كان رقم كام في المصفوفة
		}
	}
	cout << "not valid id to delete!" << endl;
	return -1;// لو مش موجود طلع رقم سالب
}

/* max GPA in array */
void frist_student() {
	int max = INT_MIN,id;
	for (int i = 0; i < gpa_vec.size(); i++) {
		if (gpa_vec[i] > max) {
			max = gpa_vec[i];
			id = i;
		}
	}
	cout << names_vec[id] << " is the 1st, has gpa " << max << "%" << endl;
}

/* الانتقال لعام دراسي جديد */
void next_Level() {
	/* تحديد عدد الطلاب الي سقطو */
	int filed_count = 0;
	cout << "next semester!" << endl;
	cout << "how many student filed? ";
	cin >> filed_count;

	if (filed_count <= id_vec.size()) { // التأكد من الرقم اذا كان عدد الطلاب دول موجودين فعلا ولا الرقم اكبر منن عددهم 
		for (int i = 0; i < level_vec.size(); i++) {
			/*
			اذا كان عدد الطلاب الي مش ناجحين ب 0 مش هيدخل 
			لو فيه طلاب سقطوا دخل ال اي دي بتاعة واتأكد انه صح لو غلط دخل الرقم تاني

			*/
			if (filed_count != 0) {
				int id;
				cout << "please enter id: ";
				cin >> id;
				while (SearchById(id) == -1) { // SearchById(id) بيحدد ترتيب العصر في المصفوفة
					cout << "please enter id again: ";
					cin >> id;
				}
				level_vec[SearchById(id)] -= 1; // اطرح من المرحلة الي وصلها واحد وهيزود عليها واحد تحت وبذلك القيمة زي ما هي متغيرتش
				filed_count--;
			}
			level_vec[i] += 1; // انقل الطلاب للمستوي التالي
			
		}
	}else {
		cout << "sorry you have only " << id_vec.size() << " student." << endl; // لو عدد الطلاب الي سقطوا اكتر من عدد الطلاب في المدرسة
	}
}

int main() {

	add_student("Omar", 123, 25, 5, 90); 
	add_student("yara", 222, 22, 3, 95);
	add_student("Mohamed", 456, 23, 3, 75);
	add_student("Ola", 111, 26, 9, 85);
	add_student("Ali", 789, 21, 2, 60);
	
	Display();
	cout << student_Count() << endl;
	cout << "------------------------" << endl;
	frist_student();
	cout << "------------------------" << endl;
	cout << SearchById(123) << endl;
	cout << SearchById(1) << endl;// not found
	cout << "------------------------" << endl;
	Update_data(111);
	Display();
	cout << "------------------------" << endl;
	next_Level();
	Display();
	cout << "------------------------" << endl;
	Delete(888); // not found
	Delete(222);
	Display();
	cout << "------------------------" << endl;
	frist_student();

}

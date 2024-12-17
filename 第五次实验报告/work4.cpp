#include<iostream>
using namespace std;
class Student {
private:
	int id;
	int grade;
public:
	Student(int Id, int Grade) {
		id = Id;
		grade = Grade;
	}
	friend void max(Student*arr);
};
void max(Student* arr) {
	int max_grade = arr[0].grade;
	int k = 0;
	for (int i = 1; i < 5; i++) {
		if (arr[i].grade > max_grade) {
			max_grade = arr[i].grade;
			k = i;
		}
	}
	cout << "the greatest student is:" << arr[k].id << endl;

}

int main() {
	Student stud[5] = {
		Student(101,78),Student(102,85),Student(103,98),Student(104,100),Student(105,97)
	};
	Student* p = &stud[0];
	max(p);
	return 0;
}
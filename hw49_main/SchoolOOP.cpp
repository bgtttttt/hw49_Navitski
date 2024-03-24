#include <iostream>

using namespace std;

class School {
public:
	string name;
	int numOfStudents;
	double age;
	int numOfClasses;
};

int main() {
	School school1;
	cout << "Input name of school:\n";
	cin >> school1.name;
	cout << "Input number of students in school:\n";
	cin >> school1.numOfStudents;
	cout << "Input age of school:\n";
	cin >> school1.age;
	cout << "Input number of classes in school:\n";
	cin >> school1.numOfClasses;

	cout << "\nInfo about school:\nName: " << school1.name <<
		"\nNumber of students : " << school1.numOfStudents <<
		"\nAge of school : " << school1.age <<
		"\nNumber of classes : " << school1.numOfClasses << "\n";
}
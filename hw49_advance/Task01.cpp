#include <iostream>
#include <string>

using namespace std;

class School {
public:
	string name;
	int numOfStudents;
	double age;
	int numOfClasses;

	double avgStudentsInClass() {
		return (numOfStudents * 1.0) / numOfClasses;
	}
	double ageInDays() {
		return age * 365;
	}
	string getInfo() {
		string s = "\nInfo about school:\nName: " + name +
			"\nNumber of students : " + to_string(numOfStudents) +
			"\nAge of school : " + to_string(age) +
			"\nNumber of classes : " + to_string(numOfClasses) + "\n";
		return s;
	}
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

	cout << school1.getInfo();
	cout << "Avg number of students in class: "
		<< school1.avgStudentsInClass() << "\n";
	cout << "Age of school in days: " << school1.ageInDays() << "\n";
}
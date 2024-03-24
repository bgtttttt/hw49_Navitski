#include <iostream>

using namespace std;

class School {
public:
	string name;
	int numOfStudents;
};

int main() {
	School school1;
	cout << "Input name of school:\n";
	cin >> school1.name;
	cout << "Input number of students in school:\n";
	cin >> school1.numOfStudents;

	cout << "\n\nName: " << school1.name << "; Number of students: " 
		<< school1.numOfStudents << "\n";
}
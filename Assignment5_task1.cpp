#include <conio.h>
#include <iostream>
#include <math.h>
#include <string>
using namespace std;


const int LEN = 50;

class Employee {
	// definition of a class
	char name[30];
	int id;
	double salary;

public:

	void set_values(char*,int,double);
	void print_values();
	//Employee* search_employee(int);
};

void Employee::set_values(char* name, int id, double salary) {
	strcpy_s(this->name, 30, name);
	this->id=id;
	this->salary = salary;
}

void Employee::print_values() {
	cout << "Employee information: " <<name << " " <<id << " "<<salary << endl;
}

int main() {
	char name[LEN];
	double salary;
	int id;
	Employee e;
	//Here we bypass the Enter key

	cout << "Enter the Employee name: ";
	cin.getline(name, LEN, '\n');
	cout << "Enter the Employee salary: ";
	cin >> salary;
	cout << "Enter the Employee ID: ";
	cin >> id;
	e.set_values(name , id, salary);
	e.print_values();
	return 0;
}

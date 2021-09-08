#pragma once
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string name;
	string phone;
	int salary;

public:
	string getName();
	string getPhone();
	int getSalary();

	void setName(string n);
	void setPhone(string p);
	void setSalary(int s);
};

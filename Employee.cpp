#include "Employee.h"

string Employee::getName() { return name; }
string Employee::getPhone() { return phone; }
int Employee::getSalary() { return salary; }

void Employee::setName(string n) { name = n; }
void Employee::setPhone(string p) { phone = p; }
void Employee::setSalary(int s) { salary = s; }
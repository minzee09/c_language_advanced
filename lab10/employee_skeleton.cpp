#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
	string name;
	int salary;
public:
	Employee() {
		name = "Unknown";
		salary = 0;
	}
	Employee(string name, int salary)
	{
		this->name = name;
		this->salary = salary;
	}
	operator int() const
	{
		return salary;
	}
};

int main()
{
	Employee e1("È«±æµ¿", 100);
	Employee e2("È«±æ¼­", 110);

	int salary = e1;
	cout << "È«±æµ¿ÀÇ salary = " << salary << endl;

	cout << "È«±æ¼­ÀÇ salary = " << e2 << endl;

	if (e1 > e2)
		cout << "È«±æµ¿ÀÇ ±Þ¿©°¡ ³ô´Ù" << endl;
	else
		cout << "È«±æ¼­ÀÇ ±Þ¿©°¡ ³ô´Ù" << endl;

	return 0;
}
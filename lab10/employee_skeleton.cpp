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
	Employee e1("ȫ�浿", 100);
	Employee e2("ȫ�漭", 110);

	int salary = e1;
	cout << "ȫ�浿�� salary = " << salary << endl;

	cout << "ȫ�漭�� salary = " << e2 << endl;

	if (e1 > e2)
		cout << "ȫ�浿�� �޿��� ����" << endl;
	else
		cout << "ȫ�漭�� �޿��� ����" << endl;

	return 0;
}
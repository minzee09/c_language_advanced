#include "Employee.h"

int main()
{
	Employee e1;

	e1.setName("ȫ�浿");
	e1.setPhone("010-1234-5678");
	e1.setSalary(4000000);

	cout << "�̸� : " << e1.getName() << ", ��ȭ��ȣ : " << e1.getPhone() << ", ���� : " << e1.getSalary() << "��" << endl;


	return 0;
}
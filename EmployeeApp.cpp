#include "Employee.h"

int main()
{
	Employee e1;

	e1.setName("홍길동");
	e1.setPhone("010-1234-5678");
	e1.setSalary(4000000);

	cout << "이름 : " << e1.getName() << ", 전화번호 : " << e1.getPhone() << ", 연봉 : " << e1.getSalary() << "원" << endl;


	return 0;
}
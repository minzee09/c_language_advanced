#include <iostream>
#include <string>
#include "Movie.h"
using namespace std;

int main()
{
	double p1,p2,p3;
	Movie m1("�����ī", "���", 7.71), m2("ī�϶� ���� ��", "������", 9.72), m3;

	m3.setName("�̺��Ĵ�");
	m3.setDirector("�ӿ���");
	m3.setPoint(8.06);

	cout<<"========================================"<<endl;
	m1.print();
	m2.print();
	m3.print();
	cout<<"========================================"<<endl;
	p1 = m1.getPoint();
	p2 = m2.getPoint();
	p3 = m3.getPoint();

	if(p1 > p2){
		if(p1 > p3)
			cout<<"���� ������ ���� ��ȭ : "<<m1.getName()<<endl;
		else
			cout<<"���� ������ ���� ��ȭ : "<<m3.getName()<<endl;
	}
	else{
		if(p2 > p3)
			cout<<"���� ������ ���� ��ȭ : "<<m2.getName()<<endl;
		else
			cout<<"���� ������ ���� ��ȭ : "<<m3.getName()<<endl;
	}

	cout<<endl;

	return 0;	
}
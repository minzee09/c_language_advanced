#include "Movie.h"

void Movie::setName(string n)
{
	name = n;
}
void Movie::setDirector(string d)
{
	director = d;
}
void Movie::setPoint(double p)
{
	point = p;
}
string Movie::getName()
{
	return name;
}
double Movie::getPoint()
{
	return point;
}
void Movie::print()
{
	cout << "��ȭ���� : " << name << endl;
	cout << "��    �� : " << director << endl;
	cout << "��    �� : " << point << endl;
}
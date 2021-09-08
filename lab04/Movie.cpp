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
	cout << "영화제목 : " << name << endl;
	cout << "감    독 : " << director << endl;
	cout << "평    점 : " << point << endl;
}
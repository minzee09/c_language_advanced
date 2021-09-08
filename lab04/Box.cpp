#include "Box.h"

void Box::setWidth(double w)
{
	width = w;
}
void Box::setLength(double l)
{
	length = l;
}
void Box::setHeight(double h)
{
	height = h;
}
double Box::getVolume()
{
	return width * length * height;
}

void Box::print()
{
	cout << "ºÎÇÇ´Â : " << width * length * height << endl;
}
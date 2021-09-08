#pragma once
#include <iostream>
#include <string>

using namespace std;

class Box {
private:
	double width;
	double length;
	double height;
	bool isEmpty;
public:
	void setWidth(double w);
	void setLength(double l);
	void setHeight(double h);
	double getVolume();
	
	void print();

	Box()
	{
		width = 5;
		length = 6;
		height = 7;
		isEmpty = true;
	}

	Box(double w,double l,double h,bool e)
	{
		width = w;
		length = l;
		height = h;
		isEmpty = e;
	}

};

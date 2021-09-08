#pragma once
#include <iostream>
#include <string>

using namespace std;

class Movie {
private:
	string name;
	string director;
	double point;
public:
	void setName(string n);
	void setDirector(string d);
	void setPoint(double p);
	string getName();
	double getPoint();
	void print();

	Movie()
	{
		name = "";
		director = "";
		point = 0;
	}

	Movie(string n, string d, double p)
	{
		name = n;
		director = d;
		point = p;
	}

};

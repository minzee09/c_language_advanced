#include <iostream>
#include <string>
using namespace std;

class Movie {

private:
	string title;
	string director;
	string actors;
	string grade;

public:
	void setTitle(string t) { title = t; }
	void setDirector(string d) { director = d; }
	void setActors(string a) { actors = a; }
	void setGrade(string g) { grade = g; }

	string getTitle() { return title; }
	string getDirector() { return director; }
	string getActors() { return actors; }
	string getGrade() { return grade; }

};

int main() {
	Movie mv;

	mv.setTitle("TENET, 2020 ");
	mv.setDirector("Christopher Nolan ");
	mv.setActors("John David Washington ");
	mv.setGrade("12 years old");

	cout << mv.getTitle() << endl;
	cout << mv.getDirector() << endl;
	cout << mv.getActors() << endl;
	cout << mv.getGrade() << endl;

	return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	string snum;
	string major;
	int grade;
	int credit;
public:
	Student(string name, string snum, string major, int grade, int credit);
	void setName(string name);
	void setSnum(string snum);
	void setMajor(string major);
	void setGrade(int grade);
	void setCredit(int credit);
	string getName();
	string getSnum();
	string getMajor();
	int getGrade();
	int getCredit();
	void print();
};
Student::Student(string name, string snum, string major, int grade, int credit)
{
	this->name = name;
	this->snum = snum;
	this->major = major;
	this->grade = grade;
	this->credit = credit;
}
void Student::setName(string name)
{
	this->name = name;
}
void Student::setSnum(string snum)
{
	this->snum = snum;
}
void Student::setMajor(string major)
{
	this->major = major;
}
void Student::setGrade(int grade)
{
	this->grade = grade;
}
void Student::setCredit(int credit)
{
	this->credit = credit;
}
string Student::getName()
{
	return name;
}
string Student::getSnum()
{
	return snum;
}
string Student::getMajor()
{
	return major;
}
int Student::getGrade()
{
	return grade;
}
int Student::getCredit()
{
	return credit;
}
void Student::print()
{
	cout << "이    름 : " << getName() << endl;
	cout << "학    번 : " << getSnum() << endl;
	cout << "소속학과 : " << getMajor() << endl;
	cout << "학    년 : " << getGrade() << endl;
	cout << "이수학점 : " << getCredit() << endl;
}

class UnderGraduate : public Student {
private:
	string club;
public:
	UnderGraduate(string name, string snum, string major, int grade, int credit, string club) :Student(name, snum, major, grade, credit)
	{
		this->club = club;
	}
	void setClub(string club)
	{
		this->club = club;
	}
	string getClub()
	{
		return club;
	}
	void print()
	{
		Student::print();
		cout << "동아리명 : " << getClub() << endl;
	}
};


class Graduate : public Student {
private:
	string assistant;
	double srate;
public:
	Graduate(string name, string snum, string major, int grade, int credit, string assistant, double srate) :Student(name, snum, major, grade, credit)
	{
		this->assistant = assistant;
		this->srate = srate;
	}
	void setAssistant(string assistant)
	{
		this->assistant = assistant;
	}
	string getAssistant()
	{
		return assistant;
	}
	void setSrate(double srate)
	{
		this->srate = srate;
	}
	double getSrate()
	{
		return srate;
	}
	void print()
	{
		Student::print();
		cout << "조교유형 : " << getAssistant() << endl;
		cout << "장학비율 : " << getSrate() << endl;
	}
};


int main()
{
	Graduate g("홍길동", "20161111", "컴퓨터학과", 2, 21, "실습조교", 0.7);
	UnderGraduate u("홍길서", "20201111", "디지털미디어학과", 1, 80, "게임개발");

	g.print();
	cout << "-------------------------" << endl;
	u.print();
	return 0;
}
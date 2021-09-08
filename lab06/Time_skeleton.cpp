#include <iostream>

using namespace std;

class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int h = 0, int m = 0, int s = 0):hour(h), minute(m), second(s){ }
	~Time(){ }
	void setHour(int h){ hour = h; }
	void setMinute(int m){ minute = m; }
	void setSecond(int s){ second = s; }
	int getHour(){ return hour; }
	int getMinute(){ return minute; }
	int getSecond(){ return second; }
	void print(){ cout<<"시간은"<<hour<<":"<<minute<<":"<<second<<endl;}
};

bool isEqual(Time tt1,Time tt2)
{
	return (tt1.getHour() == tt2.getHour()) && (tt1.getMinute() == tt2.getMinute()) && (tt1.getSecond() == tt2.getSecond());
}
bool isEqual(Time *pt1,Time *pt2)
{
	return (pt1->getHour() == pt2->getHour()) && (pt1->getMinute() == pt2->getMinute()) && (pt1->getSecond() == pt2->getSecond());
}

void main()
{
	Time t1(10, 15, 20), t2;
	Time& tt1 = t1, & tt2 = t2;
	Time* pt1 = &t1, * pt2 = &t2;

	t2.setHour(10);
	t2.setMinute(15);
	t2.setSecond(20);

	cout << "t1 ";
	t1.print();
	cout << "t2 ";
	t2.print();

	cout << "t1과 t2의 시간은 같습니다. : " << isEqual(tt1, tt2) << endl;
	cout << "t1과 t2의 시간은 같습니다. : " << isEqual(pt1, pt2) << endl;
}
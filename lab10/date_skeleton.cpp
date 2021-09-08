#include <iostream>
using namespace std;

class Date
{
	int year;
	int month;
	int day;
public:
	Date() {
		year = 0;
		month = 0;
		day = 0;
	}
	Date(int y, int m, int d) {
		year = y;
		month = m;
		day = d;
	}
	~Date() {}
	friend ostream& operator<<(ostream& os, const Date d);
	Date operator ++()
	{
		if (day == 31)
		{
			day = 1;
			if (month == 12)
			{
				month = 1;
				year++;
			}
			else
				month++;
		}
		else
			day++;
		return Date(year, month, day);
	}
	Date operator --()
	{
		if (day == 1)
		{
			day = 31;
			if (month == 1)
			{
				month = 12;
				year--;
			}
			else
				month--;
		}
		else
			day--;
		return Date(year, month, day);
	}

};
ostream& operator<<(ostream& os, const Date d)
{
	os << d.year << "년" << d.month << "월" << d.day << "일" << endl;
	return os;
}

int main() {
	Date d1(2020, 12, 31);
	cout << d1;
	cout << "++ 연산자 : ";
	cout << ++d1;
	Date d2(2020, 12, 31);
	cout << d2;
	cout << "-- 연산자 : ";
	cout << --d2;
	cout << endl;

	Date d3(2021, 1, 1);
	cout << d3;
	cout << "++ 연산자 : ";
	cout << ++d3;
	Date d4(2021, 1, 1);
	cout << d4;
	cout << "-- 연산자 : ";
	cout << --d4;
	return 0;
}
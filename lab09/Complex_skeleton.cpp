#include <iostream>

using namespace std;

class Complex {
public:
	friend Complex add(Complex, Complex); //프렌드 선언
	Complex(double r, double i) { re = r; im = i; } //매개변수가 2개인 생성자 (오버로딩)
	Complex(double r) { re = r; im = 0; } //매개변수가 1개인 생성자 (오버로딩)
	Complex() { re = im = 0; } //매개변수가 0개인 생성자 (오버로딩)
	void Output() { //출력 함수
		cout << re << " + " << im << "i" << endl;
	}
	friend Complex operator+(const Complex& c1, const Complex& c2); // 프렌드 선언 (+ 연산자 중복)

	ostream& operator<<(ostream& os) // << 연산자 중복 (멤버함수)
	{
		os << re << " + " << im << "i" << endl;
		return os;
	}

	friend ostream& operator<<(ostream& os, const Complex c); // 프렌드 선언 (<< 연산자 중복)

private:
	double re, im;
};

Complex add(Complex a1, Complex a2) //프렌드 함수 정의
{
	return Complex(a1.re + a2.re, a1.im + a2.im);
}
Complex operator+(const Complex& c1, const Complex& c2)// + 연산자 중복 (전역함수)
{
	Complex c(0.0, 0.0);
	c.re = c1.re + c2.re;
	c.im = c1.im + c2.im;
	return c;
}
ostream& operator<<(ostream& os, const Complex c) // << 연산자 중복 (전역함수)
{
	os << c.re << " + " << c.im << "i" << endl;
	return os;
}

int main()
{
	Complex c1(1, 2), c2(3, 4);
	Complex c3 = c1 + c2; //전역함수 +연산자 호출 : operator+(c1,c2)

	c1 << cout; //멤버함수 <<연산자 호출 : c1.operator<<(cout)

	cout << c3 << endl; //전역함수 <<연산자 호출 : operator<<(cout,c3)

	c3 = c3 + 1; //전역함수 +연산자 호출 : operator+(c3,1)
	cout << c3 << endl; //전역함수 <<연산자 호출 : operator<<(cout,c3)

	cout << "c1, c2, c3 : " << endl; // c1, c2, c3 출력
	c3 << (c2 << (c1 << cout)); //멤버함수 <<연산자 호출 : (순서)#1 c1.operator<<(cout) #2 c2.operator<<(cout) #3 c3.operator<<(cout)
	cout << endl;

	cout << "c1, c2, c3 : " << endl; // c1, c2, c3 출력 
	cout << c1 << c2 << c3 << endl; //전역함수 <<연산자 호출 : (순서)#1 operator<<(cout,c1) #2 operator<<(cout,c2) #3 operator<<(cout,c3)

	return(0);
}

cout << "t1 ";
t1.print();
cout << "t2 ";
t2.print();

cout << "t1과 t2의 시간은 같습니다. : " << isEqual(tt1, tt2) << endl;
cout << "t1과 t2의 시간은 같습니다. : " << isEqual(pt1, pt2) << endl;
}

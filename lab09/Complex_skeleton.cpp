#include <iostream>

using namespace std;

class Complex {
public:
	friend Complex add(Complex, Complex); //������ ����
	Complex(double r, double i) { re = r; im = i; } //�Ű������� 2���� ������ (�����ε�)
	Complex(double r) { re = r; im = 0; } //�Ű������� 1���� ������ (�����ε�)
	Complex() { re = im = 0; } //�Ű������� 0���� ������ (�����ε�)
	void Output() { //��� �Լ�
		cout << re << " + " << im << "i" << endl;
	}
	friend Complex operator+(const Complex& c1, const Complex& c2); // ������ ���� (+ ������ �ߺ�)

	ostream& operator<<(ostream& os) // << ������ �ߺ� (����Լ�)
	{
		os << re << " + " << im << "i" << endl;
		return os;
	}

	friend ostream& operator<<(ostream& os, const Complex c); // ������ ���� (<< ������ �ߺ�)

private:
	double re, im;
};

Complex add(Complex a1, Complex a2) //������ �Լ� ����
{
	return Complex(a1.re + a2.re, a1.im + a2.im);
}
Complex operator+(const Complex& c1, const Complex& c2)// + ������ �ߺ� (�����Լ�)
{
	Complex c(0.0, 0.0);
	c.re = c1.re + c2.re;
	c.im = c1.im + c2.im;
	return c;
}
ostream& operator<<(ostream& os, const Complex c) // << ������ �ߺ� (�����Լ�)
{
	os << c.re << " + " << c.im << "i" << endl;
	return os;
}

int main()
{
	Complex c1(1, 2), c2(3, 4);
	Complex c3 = c1 + c2; //�����Լ� +������ ȣ�� : operator+(c1,c2)

	c1 << cout; //����Լ� <<������ ȣ�� : c1.operator<<(cout)

	cout << c3 << endl; //�����Լ� <<������ ȣ�� : operator<<(cout,c3)

	c3 = c3 + 1; //�����Լ� +������ ȣ�� : operator+(c3,1)
	cout << c3 << endl; //�����Լ� <<������ ȣ�� : operator<<(cout,c3)

	cout << "c1, c2, c3 : " << endl; // c1, c2, c3 ���
	c3 << (c2 << (c1 << cout)); //����Լ� <<������ ȣ�� : (����)#1 c1.operator<<(cout) #2 c2.operator<<(cout) #3 c3.operator<<(cout)
	cout << endl;

	cout << "c1, c2, c3 : " << endl; // c1, c2, c3 ��� 
	cout << c1 << c2 << c3 << endl; //�����Լ� <<������ ȣ�� : (����)#1 operator<<(cout,c1) #2 operator<<(cout,c2) #3 operator<<(cout,c3)

	return(0);
}

cout << "t1 ";
t1.print();
cout << "t2 ";
t2.print();

cout << "t1�� t2�� �ð��� �����ϴ�. : " << isEqual(tt1, tt2) << endl;
cout << "t1�� t2�� �ð��� �����ϴ�. : " << isEqual(pt1, pt2) << endl;
}

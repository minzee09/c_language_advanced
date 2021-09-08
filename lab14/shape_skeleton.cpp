#include <iostream>
#include <string>
#define PI 3.141592

using namespace std;

class Shape
{
protected:
	int width;
	int height;
public:
	Shape(int w, int h) :width(w), height(h) {}// ���⿡ ���� Ŭ������ �����ڿ� ����Լ� ����
	virtual ~Shape() {}
};

class TwoDimShape : public Shape
{
private:
	int area;
public:
	// ���⿡ 2�������� Ŭ������ �����ڿ� ����Լ��� ����
	TwoDimShape(int w, int h) :Shape(w, h) {}
	virtual ~TwoDimShape() {}
	double getArea()
	{
		return area;
	}
	void setArea(int a)
	{
		area = a;
	}

};

class ThreeDimShape : public Shape
{
private:
	int volume;
public:
	// ���⿡ 3�������� Ŭ������ �����ڿ� ����Լ��� ����
	ThreeDimShape(int w, int h) :Shape(w, h) {}
	virtual ~ThreeDimShape() {}
	double getVolume()
	{
		return volume;
	}
	double setVolumje(int v)
	{
		volume = v;
	}
};

class Rectangle : public TwoDimShape
{
	// �簢�� Ŭ������ �߰� ������� ����!
public:
	// ���⿡ �簢�� Ŭ������ �����ڿ� ����Լ� ����
	Rectangle(int w, int h) :TwoDimShape(w, h) {}
	double getArea()
	{
		return width * height;
	}
};

class Ellipse : public TwoDimShape
{
	// Ÿ�� Ŭ������ �߰� ������� ����!
public:
	// ���⿡ Ÿ�� Ŭ������ �����ڿ� ����Լ� ����
	Ellipse(int w, int h) :TwoDimShape(w, h) {}
	double getArea()
	{
		return width * height * PI / 4;
	}
};

class Triangle : public TwoDimShape
{
	// �ﰢ�� Ŭ������ �߰� ������� ����!
public:
	// ���⿡ �ﰢ�� Ŭ������ �����ڿ� ����Լ� ����
	Triangle(int w, int h) :TwoDimShape(w, h) {}
	double getArea()
	{
		return width * height / 2;
	}

};

class Sphere : public ThreeDimShape
{
private:
	int radius;
public:
	// ���⿡ �� Ŭ������ �����ڿ� ����Լ� ����
	Sphere(int w, int h, int r) :ThreeDimShape(w, h), radius(r) {}
	int getRadius()
	{
		return radius;
	}
	int setRadius(int r)
	{
		radius = r;
	}
	double getVolume()
	{
		return ((double)3 / 4) * radius * radius * radius * PI;
	}
};

class Cube : public ThreeDimShape
{
private:
	int base;
public:
	// ���⿡ ����ü Ŭ������ �����ڿ� ����Լ� ����
	Cube(int w, int h, int b) :ThreeDimShape(w, h), base(b) {}
	int getBase()
	{
		return base;
	}
	int setBase(int b)
	{
		base = b;
	}
	double getVolume()
	{
		return width * height * base;
	}
};

class Cylinder : public ThreeDimShape
{
private:
	int radius;
public:
	// ���⿡ ���� Ŭ������ �����ڿ� ����Լ� ����
	Cylinder(int w, int h, int r) :ThreeDimShape(w, h), radius(r) {}
	int getRadius()
	{
		return radius;
	}
	int setRadius(int r)
	{
		radius = r;
	}
	double getVolume()
	{
		return radius * radius * PI * height;
	}
};

void printShape(TwoDimShape& s)
{
	// ���� �Ű������� �̿��� ��¹��� �ۼ�
	cout << s.getArea() << endl;
}
void printShape(ThreeDimShape& s)
{
	// ���� �Ű������� �̿��� ��¹��� �ۼ�
	cout << s.getVolume() << endl;
}

int main(void)
{
	// Ellipse(1,2), Rectangle(3,4), Triangle(5,6), 
	// Sphere(7,8,9), Cube(10,11,12), Cylinder(13,14,15)
	// ���� ���� 6���� ��ü�� �����ؼ� up-casting�ؾ� �Ʒ��� �ݺ����� ����� �� ����

	TwoDimShape* twoDimShapeArea[3];
	twoDimShapeArea[0] = new Ellipse(1, 2);
	twoDimShapeArea[1] = new Rectangle(3, 4);
	twoDimShapeArea[2] = new Triangle(5, 6);

	ThreeDimShape* threeDimShapeVolume[3];
	threeDimShapeVolume[0] = new Sphere(7, 8, 9);
	threeDimShapeVolume[1] = new Cube(10, 11, 12);
	threeDimShapeVolume[2] = new Cylinder(13, 14, 15);

	for (int i = 0; i < 3; i++)
	{
		printShape(*twoDimShapeArea[i]);
		printShape(*threeDimShapeVolume[i]);
	}

	return 0;
}
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
	Shape(int w, int h) :width(w), height(h) {}// 여기에 도형 클래스의 생성자와 멤버함수 정의
	virtual ~Shape() {}
};

class TwoDimShape : public Shape
{
private:
	int area;
public:
	// 여기에 2차원도형 클래스의 생성자와 멤버함수들 정의
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
	// 여기에 3차원도형 클래스의 생성자와 멤버함수들 정의
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
	// 사각형 클래스에 추가 멤버변수 없음!
public:
	// 여기에 사각형 클래스의 생성자와 멤버함수 정의
	Rectangle(int w, int h) :TwoDimShape(w, h) {}
	double getArea()
	{
		return width * height;
	}
};

class Ellipse : public TwoDimShape
{
	// 타원 클래스에 추가 멤버변수 없음!
public:
	// 여기에 타원 클래스의 생성자와 멤버함수 정의
	Ellipse(int w, int h) :TwoDimShape(w, h) {}
	double getArea()
	{
		return width * height * PI / 4;
	}
};

class Triangle : public TwoDimShape
{
	// 삼각형 클래스에 추가 멤버변수 없음!
public:
	// 여기에 삼각형 클래스의 생성자와 멤버함수 정의
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
	// 여기에 구 클래스의 생성자와 멤버함수 정의
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
	// 여기에 육면체 클래스의 생성자와 멤버함수 정의
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
	// 여기에 원통 클래스의 생성자와 멤버함수 정의
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
	// 형식 매개변수를 이용한 출력문장 작성
	cout << s.getArea() << endl;
}
void printShape(ThreeDimShape& s)
{
	// 형식 매개변수를 이용한 출력문장 작성
	cout << s.getVolume() << endl;
}

int main(void)
{
	// Ellipse(1,2), Rectangle(3,4), Triangle(5,6), 
	// Sphere(7,8,9), Cube(10,11,12), Cylinder(13,14,15)
	// 위와 같은 6개의 객체를 생성해서 up-casting해야 아래의 반복문을 사용할 수 있음

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
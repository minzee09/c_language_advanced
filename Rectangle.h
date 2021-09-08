#pragma once
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int height;
    int width;

public:
    void setHeight(int h);
    void setWidth(int w);

    int getHeight();
    int getWidth();
    int getArea();
};

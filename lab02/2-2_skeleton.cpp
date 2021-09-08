#include <iostream>
using namespace std;

class Rectangle
{
private:
    int height;
    int width;

public:
    void setHeight(int h) { height = h; }
    void setWidth(int w) { width = w; }

    int getHeight() { return height; }
    int getWidth() { return width; }
    int getArea() { return (height * width); }


};


int main()
{
    Rectangle r1;

    r1.setHeight(3);
    r1.setWidth(7);

    cout << "Width = " << r1.getWidth() << endl;
    cout << "Height = " << r1.getHeight() << endl;
    cout << "Area = " << r1.getArea() << endl << endl;
    return 0;
}
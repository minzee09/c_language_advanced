#include <iostream>
#include <cstring>
using namespace std;

class Book {
	char* title;	// 책 제목
	int price;		// 책 가격
	
public:
	Book(const char* title, int price);
	~Book();
	void set(const char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }
	Book(Book& b)
	{
		title = new char[strlen(b.title) + 1];
		strcpy(this->title, b.title);
		price = b.price;
	}
};
Book::Book(const char* title, int price)
{
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}

Book::~Book()
{
	delete[] title;

}
void Book::set(const char* title, int price)
{
	delete[] this->title;
	this->title = new char[strlen(title) + 1];
	strcpy(this->title,title);
	this->price = price;
}

int main() {
	Book cpp("명품C++", 10000);
	Book java(cpp);
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}
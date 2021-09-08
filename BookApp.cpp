#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main()
{
	Book book1;

	book1.setTitle("Creat C++");
	book1.setAuthor("bob");

	cout<<book1.getTitle()<<" - "<<book1.getAuthor()<<endl;

	return 0;
}
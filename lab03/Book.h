#pragma once

class Book {

private:
	string title;
	string author;

public:
	string getTitle();
	string getAuthor();

	void setTitle(string t);
	void setAuthor(string a);

};

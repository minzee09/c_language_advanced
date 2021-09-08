#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

string Book::getTitle() { return title; }
string Book::getAuthor() { return author; }

void Book::setTitle(string t) { title = t; }
void Book::setAuthor(string a) { author = a; }
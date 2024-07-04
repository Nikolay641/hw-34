#include "Publication.h"

Publication::Publication()
{
	title = "undefined";
	author = "undefined";
	year = 2000;
}

Publication::Publication(string title, string author, int year)
{
	if (title.size() == 0 || author.size() == 0) { throw new NameException; }
	if (year < 0) { throw new YearException; }
	this->title = title;
	this->author = author;
	this->year = year;
}



void Publication::setTitle(string title){ this->title = title; }

void Publication::setAuthor(string author){ this->author = author; }

void Publication::setYear(int year){ this->year = year; }

string Publication::getTitle() const{ return title; }

string Publication::getAuthor() const{ return author; }

int Publication::getYear() const{ return year; }

#pragma once
#include <iostream>
#include <string>
#include "Exception.h"
using namespace std;

class Publication
{
protected:
	string title;
	string author;
	int year;
public:
	Publication();
	Publication(string title, string author, int year);
	virtual ~Publication() {};

	void setTitle(string title);
	void setAuthor(string author);
	void setYear(int year);

	string getTitle()const;
	string getAuthor()const;
	int getYear()const;

	virtual void showInfo()const = 0;
};


#pragma once
#include "Book.h"
#include <vector>
#include <algorithm>

class Library
{
	string Name;
	vector <Publication*> Array;

public:
	Library();
	Library(string Name);

	void setName(string Name);
	string getName();

	void showInfo()const;

	void delletes(int index);

	Publication* find(string Name);

	void add(Publication* Object);
};


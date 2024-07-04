#pragma once
#include <iostream>
#include <string>
#include <exception>
using std::cout;
using std::endl;
using std::string;
using std::exception;

class PublicationException : public exception {
public:
	PublicationException() : exception(""){}
	virtual char const* what() const = 0;
};

class NameException : public PublicationException {
public:
	char const* what() const {
		return "Name is empty\n";
	}
};

class ResumeException : public PublicationException {
public:
	char const* what() const {
		return "Resume is empty\n";
	}
};
class YearException : public PublicationException {
public:
	char const* what() const {
		return "Year can't be negative number\n";
	}
};
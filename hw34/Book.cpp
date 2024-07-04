#include "Book.h"

Book::Book()
{
    Resume = "none";
}

Book::Book(string title, string author, int year, string Resume):Publication(title, author, year)
{
    if (Resume.size() == 0) { throw new ResumeException; }
    this->Resume = Resume;
}

void Book::setResume(string Resume)
{
    this->Resume = Resume;
}

string Book::getResume()
{
    return Resume;
}

void Book::showInfo() const
{
    cout << "Title  " << title << endl;
    cout << "Author " << author << endl;
    cout << "Year   " << year << endl;
    cout << "Resume " << Resume << endl<<endl;

}

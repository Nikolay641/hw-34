#pragma once
#include "Publication.h"
class Book :

    public Publication
{
    string Resume;

public: 
    Book();
    Book(string title, string author, int year, string Resume);

    void setResume(string Resume);
    string getResume();

    void showInfo()const override;
   
};


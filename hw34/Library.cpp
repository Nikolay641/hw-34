#include "Library.h"

Library::Library()
{
    Name = "Name";
}

Library::Library(string Name)
{
    if (Name.size() == 0) { throw new NameException; }
    this->Name = Name;
}

void Library::setName(string Name)
{
    this->Name = Name;
}

string Library::getName()
{
    return Name;
}

void Library::showInfo() const
{
    cout << Name << endl;
    for (auto item : Array)
    {
        item->showInfo();
        cout << endl;
    }
}

void Library::delletes(int index)
{
    Array.erase(Array.begin() + index);

}

Publication* Library::find(string Name)
{
   
    for (auto item : Array)
    {
       
        if (item->getTitle() == Name) {
            return item;
        }
    }


}

void Library::add(Publication* Object)
{
    Array.push_back(Object);
}

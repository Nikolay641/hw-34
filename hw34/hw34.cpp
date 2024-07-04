#include "Library.h"

int main()
{
    Library library("Some name");
    Publication* book1 = new Book("Title1", "Author1", 2000, "Resume1");
    Publication* book2 = new Book("Title2", "Author2", 2000, "Resume2");
    Publication* book3 = new Book("Title3", "Author3", 2000, "Resume3");

    library.add(book1);
    library.add(book2);
    library.add(book3);
    library.find("Title2")->showInfo();
    cout << "---------------------------------\n\n";    
    library.showInfo();
    cout << "---------------------------------\n\n";
    library.delletes(0);
    library.showInfo();
    cout << "---------------------------------\n\n";
    try {
        Publication* book4 = new Book("", "Author4", 2000, "Resume4");
    }
    catch (const exception* obj) {
        cout << obj->what() << endl;
    }
}
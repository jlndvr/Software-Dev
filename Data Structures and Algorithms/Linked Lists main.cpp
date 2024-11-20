#include "linkedlist.h"

int main()
{
    LinkedList list;
    cout << list.size() << endl; // 0

    Candidate c1("Alex", "Manager");
    Candidate c2("John", "Supervisor");

    list.pushFront(&c1);
    list.pushFront(&c2);

    Candidate* c3 = new Candidate("James", "User");
    list.pushFront(c3);
    cout << list.size() << endl; // 3
    list.print();
    Candidate* c4 = new Candidate("Alice", "User");
    list.pushBack(c4);
    list.print();
    delete c3;
}
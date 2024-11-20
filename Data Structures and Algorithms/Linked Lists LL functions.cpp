#include "linkedlist.h"

LinkedList::LinkedList()
{
    count = 0;
    head = nullptr;
    tail = nullptr;
}
int LinkedList::size()
{
    return count;
}
void LinkedList::pushFront(Candidate* c)
{
    Node* n = new Node();
    n->data = c;
    if(count==0)
    {
        n->next = nullptr;
        head = n;
        tail = n;
    }
    else{ // non-empty list
        n->next = head;
        head = n;
    }
    count++;
}
void LinkedList::pushBack(Candidate* c)
{
    Node* n = new Node();
    n->data = c;
    if(count == 0)
    {
        n->next = nullptr;
        head = n;
        tail = n;
    }
    else{//non-empty list
        n->next = nullptr;
        tail->next = n;
        tail = n;
    }
    count++;
}

void LinkedList::print()
{//prints candidates from left to right
    Node* current = head;//int i=0
    while(current != nullptr)
    {
        Candidate* c = current->data;
        c->display();
        current = current->next;//i=i+1
    }

}
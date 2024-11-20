#include "candidate.h"
class LinkedList{
    public:
    LinkedList();
    int size();
    // push
    // insert in front
    void pushFront(Candidate* c);
    // insert in back
    void pushBack(Candidate* c);
    // pop
    // deletion from front
    Candidate* popFront();
    // deletion from back
    Candidate* popBack();
    //print
    void print();
    private:
    class Node{
        public:
        Candidate* data;
        Node* next;
    };

    Node* head;
    Node* tail;
    int count;
};
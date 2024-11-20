#include "candidate.h"
#ifndef DENQUEUE_H
#define DENQUEUE_H
class Dequeue{
  public:
    //constructor initializes to empty list
    Dequeue();
    //return the number of elements in the list
    int size();
    //insert in the front of the linked list
    void pushFront(Candidate* s);
    //insert in the back of the linked list
    void pushBack(Candidate* s);
    //remove and return from the front of the list
    //check if list if empty
    Candidate* popFront();
    //remove and return from the back of the list
    //check if list is empty
    Candidate* popBack();
    //return from the front of the list
    //check if list is empty
    Candidate* front();
    //return from the end of the list
    //check if list is empty
    Candidate* rear();
    //traverse the list to display all candidates stored in the list
    void candidates();
  private:
    class Node{
      public:
      Candidate* data;
      Node* previous;
      Node* next;
    };
    Node* head;
    Node* tail;
    int count;
};
#endif
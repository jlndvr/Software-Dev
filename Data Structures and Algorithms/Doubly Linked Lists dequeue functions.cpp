#include "dequeue.h"
#include <iostream>
using namespace std;

Dequeue::Dequeue(){
    head=nullptr;
	tail=nullptr;
	count=0;
}

int Dequeue::size(){
    return count;
}

void Dequeue::pushFront(Candidate* s){
Node*n=new Node();
	n->data=s;
	if(count==0) {
		n->next=nullptr;
		n->previous=nullptr;
		head=n;
		tail=n;
	}
	else {
		n->next=head;
		head->previous=n;
		n->previous=nullptr;
		head=n;
	}
	count++;
}

void Dequeue::pushBack(Candidate* s){
Node* n=new Node();
n->data=s;
if(count==0){
    head=n;
    tail=n;
    n->next=nullptr;
    n->previous=nullptr;
}
else{
    n->next=nullptr;
    tail->next=n;
    n->previous=tail;
    tail=n;
}
count++;
}

Candidate* Dequeue::popFront(){
if(count==0){
        return nullptr;
    }
    else{//delete Node
        Node* h=head;
        if(count==1){
            head=nullptr;
            tail=nullptr;
        }
        else{
            head->next->previous=nullptr;
            head=head->next;
        }
        count--;
        Candidate* temp=h->data;
        delete h;
        return temp;
    }
}

Candidate* Dequeue::popBack(){
if(count == 0){
        return nullptr;
    }
    else {
        Node* t = tail;
        if(count == 1){
            head = nullptr;
            tail = nullptr;
        }
        else {
            tail->previous->next = nullptr;
            tail = tail->previous;
        }
        Candidate* temp = t->data;
        count--;
        delete t;
        return temp;
    }
}

Candidate* Dequeue::front(){
    if(count==0)
        return nullptr;
        return head->data;
}

Candidate* Dequeue::rear(){
    if(count==0)
    return nullptr;
    return tail->data;
}
void Dequeue::candidates() 
{
  Node* temp = head;
  while(temp != nullptr)
  {
    Candidate* current = temp->data;
    current->display();
    temp = temp->next;
  }
}
//void Dequeue::candidates() 
//{
  //Node* current = head;
  //while(current != nullptr)
  //{
    //current->data->display();
    //current = current->next;
  //}
//}
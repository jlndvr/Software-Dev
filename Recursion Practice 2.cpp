#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node(int d) {
        data = d;
    }
};

// Implement this function recursively. You may not use a loop.
// This function should calculate 1+2+3+...+n for the input n

int sum(int n)
{
if(n==0){
  return 0;
}
return n + sum(n - 1);
}

// This function should calculate 1*2*3*...*n for the input n

int multiplication(int n)
{
if(n<=1){
  return 1;
}
return n * multiplication(n-1);
}

// This function print the lements in the Linked list starting from head

void printLinkedList(Node* head)
{
//base case
if (head==nullptr) {
return;
}
//print the data
cout<<head->data<<" ";
//pecursively call function 
printLinkedList(head->next);
}

// This function print the lements in the Linked list in reverse

void printLinkedList_reverse(Node* head)
{
if(head==nullptr){
  return;
}
printLinkedList_reverse(head->next);
cout<<head->data<<" ";
}

int main() {

    //Testing Sum function
    cout << "The answer of 1+2+..+5 is 15, your answser is " << sum(5) << endl;
    cout << "The answer of 1+2+..+30 is 465, your answser is " << sum(30) << endl;

    //Testing Multiplication function
    cout << "The answer of 1*2*..*5 is 120, your answser is " << multiplication(5) << endl;
    cout << "The answer of 1*2*..*30 is 1409286144, your answser is " << multiplication(30) << endl;

    //Testing LinkedList Print Functions
    Node* node1 = new Node(1);
    Node* node2 = new Node(2);
    Node* node3 = new Node(3);
    Node* node4 = new Node(4);
    Node* node5 = new Node(5);
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    cout << "Your answers should be 1 2 3 4 5; Your result is ";
    printLinkedList(node1);
    cout << endl;
    cout << "Your answers should be 5 4 3 2 1; Your result is ";
    printLinkedList_reverse(node1);
    cout << endl;

}
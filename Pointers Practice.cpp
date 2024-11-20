/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void swap(int *x,int *y){//Swapp values function
cout<<"X="<<*x<<" "<<"Y="<<*y<<endl;
int z=*x;
*x=*y;
*y=z;
cout<<"Swap:"<<*x<<","<<*y<<endl;
}
int main()
{
string word = "Bleargh";
string *wp=&word;
*wp="AckAckAck";
cout<<*wp<<endl;
int x=7;
int y=15;
swap(&x,&y);

int a = 67;
int* b = &a;
cout << a << endl; // 67
cout << &a << endl; // A 0x7ffd3d78e59c
cout << b << endl;// A 0x7ffd3d78e59c
cout << &b << endl;// 0x7ffd3d78e5a0
cout << *b << endl; // 67
cout << *&a << endl; // 67
cout << *&b << endl; // 0x7ffd3d78e59c
//cout << &*a << endl; // Error because a is not pointing to an adress
cout << &*b << endl; // 0x7ffd3d78e59c
*b = 36;
cout << a << endl; // 36
cout << &a << endl; // A 0x7ffd3d78e59c
cout << b << endl; // A 0x7ffd3d78e59c
cout << &b << endl; // 0x7ffd3d78e5a0
cout << *b << endl; // 36
cout << *&a << endl; // 36
cout << *&b << endl; // A 0x7ffd3d78e59c
//cout << &*a << endl; // Error because a is not pointing to an adress
cout << &*b << endl; // A 0x7ffd3d78e59c

};
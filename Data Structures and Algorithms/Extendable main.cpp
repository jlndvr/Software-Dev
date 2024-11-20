#include <iostream>
using namespace std;
#include "extendable.h"
int main()
{
    Extendable e1(5);
    cout << e1.memSize() << endl;//5

    cout << e1.search(25) << endl;//-1

    cout << e1.size() << endl; // 0

    e1.insert(100);
    e1.insert(200);
    e1.insert(300);

    cout << e1.memSize() << endl;//5
    cout << e1.size() << endl;//3

    cout << e1.search(200) << endl;//1
    cout << e1.search(25) << endl;//-1

    e1.insert(400);
    e1.insert(500);
    e1.insert(600);//expand memory
    cout << e1.memSize() << endl;//10
    cout << e1.size() << endl;//6

    e1.insert(700);
    e1.insert(800);
    e1.insert(900);
    e1.insert(1000);
    e1.insert(1100);//expand memory
    cout << e1.memSize() << endl;//20
    cout << e1.size() << endl;//11
}
#include <iostream>
using namespace std;
//print function using recusrion 
void print(const int a[], int start, int end)
{
    if(start > end)
        return;
    cout << a[start] << " ";
    print(a, start+1, end);
}
#include<iostream>
using namespace std;
int linearSearch(int a[], int start, int end, int value)
{
    if(start > end || start <0 || end <0)
        return -1;
    
    for(int i=start; i<=end; i++)
    {
        if(a[i] == value)
            return i;
    }
    return -1;
}

int linearSearchR(int a[], int start, int end, int value)
{
    if(start > end)
        return -1;

    if(a[start] == value)
        return start;
    else
        return linearSearchR(a, start+1, end, value);
}

int main()
{
    int ar[5] = {8, 7, 10, 5, 15};
    cout << linearSearch(ar, 0, 4, 5) << endl;
    cout << linearSearchR(ar, 0, 4, 5) << endl;
}
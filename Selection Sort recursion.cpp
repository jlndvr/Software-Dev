#include "printR.h"

int minIndex(int a[], int start, int end)
{
    if(start >= end)
        return start;

    int minI = minIndex(a, start+1, end);
    if(a[start] <a[minI])
        return start;
    else
        return minI;
}

void selectionSort(int a[], int start, int end)
{
    if(start >= end) // size 1 or 0 array
        return;
    
    int minI = minIndex(a, start, end);
    swap(a[start], a[minI]); // fix the first index

    selectionSort(a, start+1, end);
}

int main()
{
    int ar[5] = {8, 7, 10, 5, 15};
    cout << "ar before sorting: ";
    printR(ar, 0, 4);
    cout << endl;
    selectionSort(ar, 0, 4);
    cout << "ar after sorting: ";
    printR(ar, 0, 4);
    cout << endl;
}
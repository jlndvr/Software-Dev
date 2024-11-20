#include "printR.h"

void insertionSort(int a[], int start, int end)
{
    if(start >= end) // size of array <=1
        return;
    
    insertionSort(a, start, end-1);
    for(int j=end-1; j>=start; j--)
    {
        if(a[j] > a[j+1])
            swap(a[j], a[j+1]);
        else
            break;
    }
}

int main()
{
    int ar[5] = {8, 7, 10, 5, 15};
    cout << "ar before sorting: ";
    printR(ar, 0, 4);
    cout << endl;
    insertionSort(ar, 0, 4);
    cout << "ar after sorting: ";
    printR(ar, 0, 4);
    cout << endl;
}
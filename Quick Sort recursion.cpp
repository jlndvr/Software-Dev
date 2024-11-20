#include "printR.h"
int partition(int a[], int start, int end)
{
    if(start >= end)
        return start;
    int pivot = a[end];

    int pIndex = start;
    for(int i=start; i<=end-1; i++)
    {
        if(a[i] < pivot)
        {
            swap(a[i], a[pIndex]);
            pIndex++;
        }
    }
    swap(a[pIndex], a[end]);
    return pIndex;

}
// divide and conquer algorithms
void quickSort(int a[], int start, int end)
{
    if(start >= end)
        return;
    int pvIndex = partition(a, start, end);
    quickSort(a, start, pvIndex-1);
    quickSort(a, pvIndex+1, end);
}

int main()
{
    int ar[5] = {8, 7, 10, 5, 15};
    cout << "ar before sorting: ";
    printR(ar, 0, 4);
    cout << endl;
    quickSort(ar, 0, 4);
    cout << "ar after sorting: ";
    printR(ar, 0, 4);
    cout << endl;
}
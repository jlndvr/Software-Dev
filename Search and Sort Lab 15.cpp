#include <iostream>
#include "print.h"
//binary
int binarySearchR(int a[], int start, int end, int value)
{
    if(start > end)
        return -1;
    int mid = (start + end)/2;
    if(a[mid] == value)
        return mid;
    else if(a[mid] < value)
        return binarySearchR(a, mid+1, end, value);
    else
        return binarySearchR(a, start, mid-1, value);
}
//lin
int linearSearchR(int a[], int start, int end, int value)
{
    if(start > end)
        return -1;

    if(a[start] == value)
        return start;
    else
        return linearSearchR(a, start+1, end, value);
}
//ins s
void insertionSortR(int a[], int start, int end)
{
    if(start >= end) // size of array <=1
        return;
    
    insertionSortR(a, start, end-1);
    for(int j=end-1; j>=start; j--)
    {
        if(a[j] > a[j+1])
            swap(a[j], a[j+1]);
        else
            break;
    }
}
//SsR
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

void selectionSortR(int a[], int start, int end)
{
    if(start >= end) // size 1 or 0 array
        return;
    
    int minI = minIndex(a, start, end);
    swap(a[start], a[minI]); // fix the first index

    selectionSortR(a, start+1, end);
}
//Qs
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
//Ms
void merge(int a[], int start, int mid, int end)
{// 0 through 2=> 2-0+1
  int lSize = mid - start + 1;
  int rSize = end - (mid+1) + 1; // end-mid

  int *leftArray = new int[lSize];
  for(int i=0; i<lSize; i++) // copy all values from a(left-half) into leftarray
    leftArray[i] = a[start+i];
  int* rightArray = new int[rSize];
  for(int i=0; i<rSize; i++) // copy all values from a(right-half) into rightarray
    rightArray[i] = a[mid+1+i];

  // combine values from leftArray and rightArray into a
  int lI = 0, rI = 0, i = start;
  while(lI<lSize && rI<rSize) // as long as both arrays have values
    {
      // store one or the other value
      if(leftArray[lI] <= rightArray[rI])
      {
        a[i] = leftArray[lI];
        lI++;
      }
      else{
        a[i] = rightArray[rI];
        rI++;
      }
      i++;
    }
  while(lI < lSize) // if left still had values
    {
      a[i] = leftArray[lI];
      lI++; 
      i++;
    }
  while(rI < rSize) // if right still had values
    {
      a[i] = rightArray[rI];
      rI++;
      i++;
    }
  delete[] leftArray;
  delete[] rightArray;
}

void mergeSort(int a[], int start, int end)
{
  if(start >=end)
    return;
  int mid = (start + end)/2;
  mergeSort(a, start, mid); // left array
  mergeSort(a, mid+1, end); // right array
  merge(a, start, mid, end); // merge together // O(n)

}
int main(){
int ar[6] = {8, 3, 7, 10, 15, 25};
cout << binarySearchR(ar, 0, 4, 15) << endl;
int ar5[6] = {8, 3, 7, 10, 15, 25};
cout << linearSearchR(ar5, 0, 4, 15) << endl;
int ar4[6] = {8, 3, 7, 10, 15, 25};
    cout << "ar before sorting: ";
    print(ar, 0, 4);
    cout << endl;
    insertionSortR(ar4, 0, 4);
    cout << "ar after sorting: ";
    print(ar4, 0, 4);
    cout << endl;
int ar3[6] = {8, 3, 7, 10, 15, 25};
    cout << "ar before sorting: ";
    print(ar3, 0, 4);
    cout << endl;
    selectionSortR(ar3, 0, 4);
    cout << "ar after sorting: ";
    print(ar3, 0, 4);
    cout << endl;
int ar2[6] = {8, 3, 7, 10, 15, 25};
    cout << "ar before sorting: ";
    print(ar2, 0, 4);
    cout << endl;
    quickSort(ar2, 0, 4);
    cout << "ar after sorting: ";
    print(ar2, 0, 4);
    cout << endl;
int ar1[6] = {8, 3, 7, 10, 15, 25};
    cout << "ar before sorting: ";
    print(ar1, 0, 4);
    cout << endl;
    mergeSort(ar1, 0, 4);
    cout << "ar after sorting: ";
    print(ar1, 0, 4);
    cout << endl;
};
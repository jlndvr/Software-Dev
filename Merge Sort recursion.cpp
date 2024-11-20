#include "printR.h"

void merge(int a[], int start, int mid, int end)
{/// 0 through 2=> 2-0+1
  int lSize = mid - start + 1;
  int rSize = end - (mid+1) + 1; // end-mid

  int *leftArray = new int[lSize];
  for(int i=0; i<lSize; i++) // copying all values from a(left-half) into leftarray
    leftArray[i] = a[start+i];
  int* rightArray = new int[rSize];
  for(int i=0; i<rSize; i++) // copying all values from a(right-half) into rightarray
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

int main()
{
    int ar[5] = {8, 7, 10, 5, 15};
    cout << "ar before sorting: ";
    printR(ar, 0, 4);
    cout << endl;
    mergeSort(ar, 0, 4);
    cout << "ar after sorting: ";
    printR(ar, 0, 4);
    cout << endl;
}
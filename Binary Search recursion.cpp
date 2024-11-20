#include<iostream>
using namespace std;

int binarySearch(int a[], int start, int end, int value)
{
    int mid;
    while(start <= end)
    {
        mid = (start + end)/2;
        if(a[mid] == value)
            return mid;
        else if (a[mid] < value)
            start = mid+1; // check on right side
        else
            end = mid - 1;// check on left side
    }
    return -1;
}

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

int main()
{
    int ar[5] = {8, 7, 10, 15, 25};
    cout << binarySearch(ar, 0, 4, 15) << endl;
    cout << binarySearchR(ar, 0, 4, 15) << endl;
}
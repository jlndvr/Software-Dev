#include "extendable.h"

Extendable::Extendable(int s)
{
    ar = new int[s];
    memorySize = s;
    count = 0;
}
Extendable::~Extendable()
{
    delete[] ar;
}
int Extendable::search(int value)
{
    for(int i=0; i<count; i++)
    {
        if(ar[i] == value)
        {return i;}
    }
    return -1;
}
int Extendable::memSize()
{
    return memorySize;
}
int Extendable::size()
{
    return count;
}

void Extendable::insert(int value)
{
    if(count < memorySize)//space is available
    {
        ar[count] = value;
        count++;
    }
    else{//memory is full
        // expand the memory
        int newSize = 2*memorySize;
        int* br = new int[newSize];
        //copy
        for(int i=0; i<count; i++)
        {
            br[i] = ar[i];
        }
        //delete previous space
        delete[] ar;
        ar = br;//point ar to the new space

        // insert the value
        ar[count] = value;
        count++;
        memorySize = newSize;
    }
}
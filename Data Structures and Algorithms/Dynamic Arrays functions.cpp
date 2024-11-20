#include "dynamic.h"
Dynamic::Dynamic(int size){
    ar=new int[size];
    _size=size;//Returns amount of total spaces used or unused
    count=0;//Returns amount of spaces used
}
void Dynamic::insert(int value){
    if(count<_size){
        ar[count]=value;
        count++;
    }
    else{
        int newSize=2*_size;
        int *br=new int[newSize];
        //copy
        for(int i=0;i<count;i++){
            br[i]=ar[i];
        }
    delete[] ar;
    ar=br;
    //insert
    ar[count]=value;
    count++;
    _size=newSize;
}
}
int Dynamic::size(){
    return count;
}
int Dynamic::memSize(){
    return _size;
}
int Dynamic::findValue(int value){
    for(int i=0;i<count;i++){
        if(ar[i]==value){
            return i;
        }
    }
    return -1;
}
Dynamic::~Dynamic(){
    delete[] ar;
}
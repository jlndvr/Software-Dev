#include <iostream>
using namespace std;
void lightningstrike(float x,float d1,float d2){
float APROXspeedofsound=343;//APROX, not incorporating elements 
d1=x*APROXspeedofsound;
d1=d1/1000;//Converts to km
d2=d1*.621371;//Converts to miles
cout<<"Distance in kilometers:"<<d1<<"\n";//km
cout<<"Distance in miles:"<<d2<<"\n";//miles
}
int main(){
float time;
cout<<"Welcome, this is a calculator to calculate the approximate distance between you and a lightning strike you may encounter on a stormy day."<<"\n\n";
cout<<"How to use:"<<"\n";
cout<<"1)Count the time between seeing lightning and hearing thunder."<<"\n";
cout<<"NOTE:For a more accurate measurment of distance use a stop watch."<<"\n\n";
cout<<"Enter time:";
cin>>time;
cout<<endl;
lightningstrike(time,0,0);
};
#include <iostream>
#include <string>
using namespace std;
class character{
private:
string name;
int health;
public:
character(string n){
  health=50;
name=n;
}
void updateHealth(character &c){
  health+=10;
  c.health-=10;
}
int getHealth(){
  return health;
}
string getName(){
  return name;
}
void print(){
  cout<<"Name:"<<name<<" "<<"Health:"<<health;
}
};
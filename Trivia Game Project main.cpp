#include <iostream>
#include <string>
#include "character.h"
using namespace std;
int MAX_SCORE;
int GAME_SCORE;
string ans;
void lvl1(character&c1,character&c2){//Lvl1
cout<<"The first riddle is, if you drop a yellow hat in the Red Sea, what does it become?"<<endl;
cout<<endl;
cout<<"Answer:";
cin>>ans;
cout<<endl;
  if (ans == "Wet" || ans == "wet") {
    cout << "Fine, you are correct BAtsY." << endl;
    cout<<endl;
    c1.updateHealth(c2);
    c1.print();
       cout<<endl;
    c2.print();
      cout<<endl;
      cout<<endl;
    GAME_SCORE+=10;
  }
  else{ 
    cout << "Wrong, Oracle is losing health. Out score Joker." << endl;
    cout<<endl;
    c2.updateHealth(c1);
    c1.print();
       cout<<endl;
    c2.print();
      cout<<endl;
      cout<<endl;
cout<<endl;
  }
}
  void lvl8(character&c1,character&c2){
cout<<"You’ll find me in Mercury, Earth, Mars and Jupiter, but not in Venus or Neptune. What am I?"<<endl;
  cout<<endl;
  cout<<"The letter:";
  cin>>ans;
cout<<endl;
if(ans=="R"||ans=="r"){
cout << "Fine, you are correct. Surprisingly BAtsY." << endl;
cout<<endl;
c1.updateHealth(c2);
c1.print();
   cout<<endl;
c2.print();
  cout<<endl;
  cout<<endl;
  GAME_SCORE+=10;
}
else{
  cout<<"Wrong, Oracle is losing health. Out score Joker."<<endl;
  cout<<endl;
      c2.updateHealth(c1);
      c1.print();
         cout<<endl;
      c2.print();
        cout<<endl;
        cout<<endl;
  cout<<endl;
}
cout<<endl;
}
void lvl2(character&c1,character&c2){//Lvl2
  cout<<"There is a clothing store in Bartlesville. The owner has devised his own method of pricing items. A vest costs $20, socks cost $25, a tie costs $15 and a blouse costs $30. Using the method, how much would a pair of underwear cost?"<<endl;
  cout<<endl;
  cout<<"Answer:$";
  cin>>ans;
  cout<<endl;
    if (ans == "45") {
      cout << "You are correct, again..." << endl;
      cout<<endl;
      c1.updateHealth(c2);
      c1.print();
      cout<<endl;
      c2.print();
      cout<<endl;
      cout<<endl;
      GAME_SCORE+=10;
    }
    else{ 
      cout << "Wrong, Oracle is losing health. Out score Joker." << endl;
      cout<<endl;
          c2.updateHealth(c1);
          c1.print();
             cout<<endl;
          c2.print();
            cout<<endl;
            cout<<endl;
      cout<<endl;
    }
  cout<<endl;
}
  void lvl7(character&c1,character&c2){
  cout<<"The rungs of a 10-foot ladder attached to a ship are 1 foot apart. If the water is rising at the rate of one foot an hour, how long will it take until the water covers the ladder?"<<endl;
  cout<<endl;
  cout<<"Never or 10 hours:";
  cin>>ans;
  cout<<endl;
    if (ans == "Never" || ans=="never") {
      cout << "Quit being so right!!!" << endl;
      cout<<endl;
      c1.updateHealth(c2);
      c1.print();
       cout<<endl;
      c2.print();
      cout<<endl;
      cout<<endl;
      GAME_SCORE+=10;
    }
    else{ 
      cout << "Wrong, Oracle is losing health. Out score Joker." << endl;
      cout<<endl;
          c2.updateHealth(c1);
          c1.print();
             cout<<endl;
          c2.print();
            cout<<endl;
            cout<<endl;
      cout<<endl;
    }
  cout<<endl;
}
void lvl3(character&c1,character&c2){//Lvl3
  cout<<"I speak without a mouth and hear without ears. I have no body, but I come alive with wind. What am I?"<<endl;
  cout<<endl;
  cout<<"Answer:";
  cin>>ans;
  cout<<endl;
    if (ans == "Echo" || ans == "echo") {
      cout << "I CAN NOT STOP YOU!!! WHYYY" << endl;
      cout<<endl;
      c1.updateHealth(c2);
      c1.print();
       cout<<endl;
      c2.print();
      cout<<endl;
      cout<<endl;
      GAME_SCORE+=10;
    }
    else{ 
      cout << "Wrong, Oracle is losing health. Out score Joker." << endl;
      cout<<endl;
          c2.updateHealth(c1);
          c1.print();
             cout<<endl;
          c2.print();
            cout<<endl;
            cout<<endl;
      cout<<endl;
}
}
  void lvl4(character&c1,character&c2){
  cout<<"I come from a mine and get surrounded by wood always. Everyone uses me. What am I?"<<endl;
    cout<<endl;
    cout<<"Answer:";
    cin>>ans;
  cout<<endl;
  if(ans=="lead"||ans=="Lead"){
  cout << "NOOOOoooooooo, I am finished;(" << endl;
  cout<<endl;
    c1.updateHealth(c2);
    c1.print();
     cout<<endl;
    c2.print();
    cout<<endl;
    cout<<endl;
  }
  else{
    cout<<"Wrong, Oracle is losing health. Out score Joker."<<endl;
  cout<<endl;
      c2.updateHealth(c1);
      c1.print();
         cout<<endl;
      c2.print();
        cout<<endl;
        cout<<endl;
  cout<<endl;
}
  }
void winner(character&c1,character&c2){
if(c1.getHealth()>c2.getHealth()){
  cout<<c1.getName()<<" "<<"has saved Oracle, The city of Gotham is thankful."<<endl;
  cout<<endl;
  cout<<c1.getName()<<" "<<"Health:"<<c1.getHealth()<<endl;
  cout<<endl;
  cout<<"Game score:"<<GAME_SCORE<<endl;
  cout<<endl;
}
else if(c2.getHealth()>c1.getHealth()){
  cout<<c2.getName()<<" "<<"has killed Oracle..."<<endl;
  cout<<endl;
  cout<<"Game score:"<<GAME_SCORE<<endl;
  cout<<endl;
}
else{
  cout<<"We shall play again bAtSY or she's dead."<<endl;
  cout<<endl;
  cout<<"Game score:"<<GAME_SCORE<<endl;
  cout<<endl;
}
}
int main(){
character Batman("Batman");
character Joker("Joker");
cout<<"Welcome!"<<endl;
cout<<endl;
cout<<"This game is composed of 3 levels with each level including 2 challenges. Your goal will be to save Barbara who goes by the codename Oracle by passing the challenges given. Oracle was kidnapped by the Joker on Christmas night. You are Batman."<<endl;
cout<<endl;
cout<<endl;
cout<<"On Christmas day where crime was not present in the city of Gotham, Batman took it upon himself to rest. He gave the order without being aware the Joker was waiting for this exact moment. A moment where no vigilante was seen through the gloomy night.";
cout<<endl;
cout<<"While Batman is relaxing in the bat cave, he sees the bat signal over the city. He quickly goes to his computer and reads that the daughter of Jim Gordon has been kidnapped by the Joker"<<endl;
cout<<endl;
cout<<"Then his computer is hijacked by the Joker. A video call with the Joker and Oracle are seen. Oracle is tied up to a chair with the Joker dancing around. The Joker then states.";
cout<<endl;
cout<<endl;
cout<<"Batman to free your beloved Barbara Gordon...or should I say Oracle, you are to solve these riddles..."<<endl;
cout<<endl;
  do{
  if(Batman.getHealth() >=10){
       lvl1(Batman,Joker);
}
  else{
  //update Max score if needed
  break;
  }
    if(Batman.getHealth() >=10){
       lvl8(Batman,Joker);
    }
    else{
    //update Max score if needed
    break;
    }
  if(Batman.getHealth() >=10){
       lvl2(Batman,Joker);
  }
  else{
  //update Max score if needed
  break;
  }
    if(Batman.getHealth() >=10){
       lvl7(Batman,Joker);
    }
    else{
      if(GAME_SCORE>MAX_SCORE){
        MAX_SCORE=GAME_SCORE;
      }
    //update Max score if needed
    break;
    }
  if(Batman.getHealth()>=10){
        lvl3(Batman,Joker);
}
  else{
    if(GAME_SCORE>MAX_SCORE){
      MAX_SCORE=GAME_SCORE;
    }
  //Update Max score if needed
  break;
  }
  if(Batman.getHealth()>=10){
      lvl4(Batman,Joker);
}
    else{
      if(GAME_SCORE>MAX_SCORE){
        MAX_SCORE=GAME_SCORE;
      }
    //Update Max score if needed
    break;
    }
    if(GAME_SCORE>MAX_SCORE){
      MAX_SCORE=GAME_SCORE;
    }
    else{
    }
    cout<<endl;
    winner(Batman,Joker);
  //update Max score if needed
  cout <<"Do you wish to continue? ";
  cin>>ans;
  cout<<endl;
  }
while(ans=="yes"||ans=="Yes");
cout<<"Your max score is:"<<MAX_SCORE;
}
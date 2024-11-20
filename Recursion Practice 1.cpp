#include <iostream>
using namespace std;


// Write a method â€˜void lineOfStars(int n)â€™ that prints a line of n stars.  
// You may not use a loop.
void lineOfStars(int n) {
    if(n<=0){
        cout<<endl;
        return;
    }
    cout<<"*";
    lineOfStars(n-1);
}


/*
Write a method â€˜void stars(int n)â€™ that prints the weird shape below.
You may not use a loop.  You may call â€˜lineOfStarsâ€™ as a subroutine inside this function.

stars(4);

should display:

****
***
**
*
*
**
***
****

*/
void stars(int n) {
if(n<=0)
return;
    lineOfStars(n);
  stars(n-1);
lineOfStars(n);
}




//This function calculates the x to the power of n recursively 
// You may not use a loop.
int power(double x, int n) {
  if(n<0){
    return 1/power(x,-1*n);
    }
  else if(n==0){
    return 1;
    }
  else
    return x*power(x,n-1);
}


int main() {

    lineOfStars(5);  //   should display: *****
    stars(4);
    cout << power(3, 3) << endl; // should be 27
	cout << "10 to the power of 3 is 1000, your answer is " << power(10, 3) << endl;
    cout << "7 to the power of 6 is 117649 , your answer is " << power(7, 6) << endl;
    
}
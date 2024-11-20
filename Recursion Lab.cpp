#include <iostream>
using namespace std;
/*
Define using loops so product return the product of all values between 1 through n inclusive
  */
long product(int n)
{
    long sum=1;
  for(int i=1;i<=n;i++){
      sum*=i;
  }
  return sum;
}
/*
Using recursion (no loops) define productR to return the product of all values between 1 and n (inclusive)
  */
long productR(int n)
{
  if(n==1){
      return 1;
  }
  return  n * productR(n - 1);
}
/*
Define using loops so countOdd returns the number of odd integers between 1 and n (inclusive)
  */
int countOdd(int n)
{
  int count=0;
  for(int i=1;i<=n;i++){
      if(i%2!=0){
          count++;
      }
  }
  return count;
}
/*
Using recursion (no loops) define countOddR to return the number of odd integers between 1 and n (inclusive)
  */
int countOddR(int n)
{
if (n <= 0) {
        return 0;
    }
    if (n % 2 != 0){
        return 1 + countOdd(n - 1);
    } 
    else{
        return countOdd(n - 1);
    }
}
/*
Define using loops so countEvenVal returns the number of even integers between start and end (inclusive)
  */
int countEvenVal(int start, int end)
{
  int count=0;
for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            count++;
        }
    }
    return count;
}
/*
Using recursion (no loops) define countEvenValR returns the number of even integers between start and end (inclusive)
  */
int countEvenValR(int start, int end)
{
    if (start > end) {
        return 0;
    }
    if (start % 2 == 0) {
        return 1 + countEvenValR(start + 1, end);
    } 
    else {
        return countEvenValR(start + 1, end);
    }
}

int main() {
  int x = 10, y = 25;
  cout << product(x) << endl;
  cout << productR(x) << endl;
  cout << countOdd(x) << endl;
  cout << countOddR(x) << endl;
  cout << countEvenVal(x, y) << endl;
  cout << countEvenValR(x, y) << endl;
  
}
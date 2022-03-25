#include <iostream>
#include <cmath>
using namespace std;

 
int
main () 
{
  int a,zeroCounter = 0,last;
  cin>>a;
  
  while (a != 0){
      last = a%10;
     if(last==0)zeroCounter ++;
      a=a / 10;
      
  }
  cout<< zeroCounter;
return 0;

}

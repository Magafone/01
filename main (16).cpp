#include <iostream>
#include <cmath>
using namespace std;

 
int
main () 
{
  int a,result = 0,last;
  cin>>a;
  
  while (a != 0){
      last = a%10;
      result += last;
      a=a / 10;
      
  }
  cout<< result;
return 0;

}

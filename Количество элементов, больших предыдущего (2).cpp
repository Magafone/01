#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int n,i,res=0,b;
  cin>>n;
  int aray[n];
  for(i=0;i<n;i++)
  {
      cin>>aray[i];
  }
  b=aray[0];
  for(i=0;i<n;i++)
  {
      if(b<aray[i])
      {
          res++;
          b=aray[i];
      
          
      }else{
              b=aray[i];
          }
  }
  cout<<res;
return 0;

}

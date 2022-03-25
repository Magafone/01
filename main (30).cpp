#include<iostream>
using namespace std;//function finding minimum number

int main()
{
  int n,j,i,res,b;
  cin>>n;
  int akai_jovid[n];
  for(i=1;i<=n;i++)
  {
      cin>>akai_jovid[i];
     
      }
      j=akai_jovid[0];
      for(i=1;i<=n;i++)
      {
          if(b<akai_jovid[i])
          {
              res=i; 
              b=akai_jovid[i];
          }
      }
      cout<<res;
 return 0;
}
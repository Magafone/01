#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n,k,res=1,sum=0,i,j;
   cin>>n>>k;
   for(i=1;i<=n;i++)
   {
       for(j=1;j<=k;j++)
       {
           res=res*i;
       }
       sum=sum+res;
       res=1;
   }
   cout<<sum;
    return 0;
}
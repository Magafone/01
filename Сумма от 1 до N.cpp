#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    long long int n,sum=0,res;
    cin>> n ;
    for( int i = 0;i <= n ; i++)
   {
       if(n>0)
       sum=sum+i;
   if (n<0)
    res=res+n;
   }
   cout<<sum;
   cout<<res;
    return 0;

}




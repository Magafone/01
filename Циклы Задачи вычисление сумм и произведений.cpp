#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int i,n, res=0,j, f=1;
cin>>n;
for (i=0; i<=n; i++)
   {
       for (j=1; j<=i;j++)
       {
         f=f*2;
       }
   res=res+f;
   f=1;
   }
   cout<<res;
return 0;
}
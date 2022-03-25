#include <iostream>
#include <cmath>
using namespace std;
int fibonachi(int n)
{
    int a=0,b=1,x,i;
    for(i=0;i<n;i++)
     {
         x=b;
         b=a+b;
         a=x;
     }
return b;
}
int main()
{
    int a=0,b=1,x,i,n;
    cin>>n;

     cout<<fibonachi(n);
return 0;
}






#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int a,n,i,res=1;
 cin>>n;
 for(i=1;i<=n;i++)
 {
   res=i*i*i;
   cout<<res<<" ";
   res=1;
 }
   return 0;
}
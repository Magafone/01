#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   double n,res=0;
   cin>>n;
   for(int i= 0; i<=n;i++)
   {
       res+=pow(-1,i) / (2*i+1);

   }
   cout<<4*res;
     return 0;
}

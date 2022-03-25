#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a;
float res=0,c=0,g;
 
while (a!=0)
{
   cin>>a;
   res++;
   c=c+a;
   g=c/res;
}
res=res-1;
   cout<<c/res<<endl;
return 0;
}
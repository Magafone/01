#include <iostream>
#include <cmath>
using namespace std;
int seconds(int a,int b,int c)
{
    int res;
   a=a*3600;
   b=b*60;
   c=c;
   res=a+b+c;
   return res;
}
int main()
{
int a,b,c,d;
cin>>a>>b,c;

cout<<seconds(a,b,c);
return 0;
}





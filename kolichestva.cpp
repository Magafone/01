#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,res;
cin>>a>>b>>c;
if(a==b||a==c)
res++;
if(b==a||b==c)
res++;
if(c==a||c==b)
 res++;
cout<<res;

        return 0;
}






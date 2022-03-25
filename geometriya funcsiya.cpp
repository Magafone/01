#include <iostream>
#include <cmath>
#include <algorithm>
int factorial(int n)
{
    int res=1;

for(int i=1;i<=n;i++)
{
    res = res * i;
}
return res;
}
using namespace std;
int main()
{
 int n,c,k;
cin>>n>>k;
c =  factorial(n) / factorial(k) * factorial(n-k);
cout<<c<<endl;
 return 0;
}

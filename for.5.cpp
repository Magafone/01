#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
int i,n,sum=0;
cin>>n;
for(i=1;i<=n;i++)
{
    sum+=i;
    if(i==6)
   {break;}
}
if(sum%2==0)
{
    cout<<"Juft";

}
else{cout<<"Tok";}
    return 0;
}









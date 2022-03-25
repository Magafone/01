#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
  int n,res=0,calk=0,m;
  cin>>n;
while(n!=0){
  m=n%10;
res=res+m;
calk++;
n=n/n;}
cout<<res<<" "<<calk;
return 0;
}



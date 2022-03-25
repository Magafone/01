#include<iostream>
#include<cmath>
using namespace std;
int main ()
{
 int n,k,res=1,sum=1,c;
 cin>>n>>k;
for(int i=1;i<=n;i++)
{
  res=res*i;
  for(int j=1;j=k;i++)
  {
     sum=sum*j;
  }
}
c=res/sum(res-sum);
cout<<c;
}

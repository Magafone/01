#include<iostream>
using namespace std;
int main()
{
int n, petya, i, res=1;
cin>>n;
int aray[n];
for(i=0; i<n; i++){
cin>>aray[i];}
cin>>petya;

for(i=0; i<n; i++){
if (aray[i]>=petya){res++;}}
cout<<res<<" ";
return 0;
}

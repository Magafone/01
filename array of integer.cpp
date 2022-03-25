#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
   int n,p;
 cin>>n;
 int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 sort(a,a+n);

 for(int i=0;i<n;i++)
 {
     if(a[i]!=a[i+1]) {cout<<a[i]<<" ";}
 }
return 0;
}


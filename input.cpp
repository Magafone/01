#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
 int n,p;
 cin>>n,p;
 int a[n];
 for(int i=0;i<n;i++)
 {
     cin>>a[i];
 }
 cin>>p;
 sort(a,a+n);
reverse(a,a+n);

 for(int i=0;i<p;i++)
 {
     cout<<a[i]<<" ";
 }

return 0;
}



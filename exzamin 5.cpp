#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
float res=0;
int n,i;
cin>>n;
int arayy[n];
for (int i=0;i<n;i++)
{
 cout<<"Array ["<<i<<"] = ";
 cin>>arayy[i];
 cout<<endl;

}
for (int i=0;i<n;i++)
{
res=res+arayy[i];

}
cout<<"Sresdniy arifmeticheskiy : "<<res/n;


    return 0;
}



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n, res=1, sum=0;
cin>>n;
for(int i = 1; i<=n; i++)
{ 
    for(int j=1; j<=i; j++)
    {
        res=res*i;
    }
    sum=sum+res;
    res=1;
}
cout<<sum<<" ";

    return 0;
}


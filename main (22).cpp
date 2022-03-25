
#include <iostream>

using namespace std;

int main()
{
int a, n, j, i, res=1;
cin>>a>>n;
for(i=1;i<=a;i++)
{
    for(j=1;j<=n;j++)
    {
        res=res*i;
    }
}
cout<<res<<" ";
res=1;
    return 0;
}

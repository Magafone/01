#include <iostream>
#include <cmath>
using namespace std;
int main()
{
 int a,n,sum=1;
 cin>>a>>n;
    for(int i=1; i<=n; i++)
    {
        sum = sum + pow(a,i);
        
    }
    cout<<sum<<" ";
    return 0;
}
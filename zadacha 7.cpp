#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n, i, j;
    cin>>n;
    int num[n];
    for(i=0; i<n; i++)
        {cin>>num[i];}
    for(i=0; i<n; i++)
    {if(num[i]%2==0)
    {cout<<num[i]<<" ";}}
    cout<<endl;
    for(int i=0; i<n; i++)
    {if(num[i]%2==1){cout<<num[i]<<" ";}}
    return 0;
}

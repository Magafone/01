#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        c=pow(2,i);
    if(c>n)
    {break;}
        cout<<c<<" ";

    }
    return 0;

}



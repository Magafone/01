#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        if(n%i==0)
       {
            cout<<i<<" ";
            break;
       }

    }
    return 0;

}


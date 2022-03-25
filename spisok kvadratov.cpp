#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        d=i*i;

        if(d>n)
        {
            break;
        }

  cout<<d<<" ";
   }
}

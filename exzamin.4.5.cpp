#include<iostream>
#include<cmath>
#include <stdlib.h>
using namespace std;

int main ()
{
    int n,res=0,i,sum;
    cin>>n;
    int array[n];
    for( i=0; i<=n; i++)
    {
        res = pow(2,i);
        sum=res+res;
    }
    cout<<sum;
    return 0;
}


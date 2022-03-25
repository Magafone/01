#include<iostream>
#include<cmath>
#include <stdlib.h>
using namespace std;

int main ()
{
    int n,i;
    cin>>n;
    int array[n];
    for(i=0; i<n; i++)

    {
        cin>>array[i];
    }
    for(i=0; i<n; i++)

    {
        if(array[i]<0);
        {
            array[i]=0;
       cout<<array[i];
        }
    }


return 0;
}


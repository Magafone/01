
#include<iostream>
#include<cmath>
#include <stdlib.h>
using namespace std;

int main ()
{
    int n;
    int maxx, mini,res,max,min;
    cin>>n;
    int array[n];

    for(int i=0; i<n; i++)
    {
        cin>> array[i];
    }


     max = array[0];
    for(int i=1; i<n; i++)
    {
        if(array[i] >= max)
        {
            max  = array[i];
            maxx = i;
        }
    }


     min = array[0];
    for(int i=1; i<n; i++)
    {
        if(array[i] <= min)
        {
            min  = array[i];
            mini = i;
        }
    }


    cout<<array[maxx]<<" "<<array[mini];
}

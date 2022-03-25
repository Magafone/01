#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int n,b;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }
    sort (array,array+n);
    cin>>b;

    for(int i=0; i<n; i++)
    {
        if(b<[i]){cout<<[i];}
        if(b>[i]){cout<<[i];}
        if(b>=[i]){cout<<b;}
    }
    return 0;
}

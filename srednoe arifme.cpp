
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n,cnt,res;
    cin>>n;
    float array[n];
    for(int i=0; i<n; i++)
    {
        cin>>array[i];
        res=res+i;
        cnt++;
    }
    cout<<res/cnt;
    return 0;
}



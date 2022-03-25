
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,res=1,sum;
    cin>> n;
    int numbers[n];
    for(int i=0; i<n; i++)
    {
        cin>>numbers[i];
    }
    for(int i=0; i<n; i++)
    {

        if(numbers[i]>=sum)
        {
            res=res+1;
        }
    }
    cout<<res;
    return 0;
}


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
    cin>>sum;
    for(int i=0; i<n; i++)
    {

        if(numbers[i]==sum)
        {
            sum=sum=1;
        }
    }
    cout<<sum;
    return 0;
}

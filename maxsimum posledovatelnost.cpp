#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n,number, max;
    cin>>n;

    cin>>number;
    max = number;
    for(int i=2; i<=n; i++)
    {
        cin>>number;
        if(number > max) max = number;
    }


    cout<<max;

    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
long long int MaxDigit(int n)
{
    long long int rem, max = 0;

    while( n != 0)
    {

        rem  = n %10;
        if(rem > max)
        {
            max = rem;
            n = n /10;
        }

    }

    return max;
}
int main()
{
    long long int n,max;
    cin>>n;
    max = MaxDigit(n);
    cout<<max;
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n,number, max;
    cin>>number;
    max = number;

    while(true)
    {
    cin>>number;
    if(number > max) max = number;
    if(number == 0) break;
    }
    cout<<max;
    return 0;
}


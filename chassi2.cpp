#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n, a, b, c,d;
    cin>>a;
    c = a / 3600 % 24;
    cout<< c <<":";
    d = a / 60 % 60;
    if(d<10)

        cout<<0;
    cout<<d<<":";
    b = a % 60;
    if(b < 10)

        cout<<0;
    cout<<b;

    return 0;
}


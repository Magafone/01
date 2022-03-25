#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int h,a,b,shag,g;
    cin>>h>>a>>b;
    g=h-a;
    shag=a-b;
    cout<<1+g/shag+(g%shag+shag-1)/shag;
    return 0;
}


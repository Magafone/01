#include <iostream>
#include <cmath>
using namespace std;
float alt(int a,int b)
{
    float res;
    res = pow(a,b);
    return res;
}
int main()
{
float a,b,sum;
cin>>a>>b;
cout<<alt(a,b);
return 0;
}



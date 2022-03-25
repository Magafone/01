#include <iostream>
#include <cmath>
using namespace std;
int area(int a)
{
    return a*a;
}
int area(int a,int b)
{
    return a*b;
}
int area(int a,int b,int c)
{
    double s;
    s=(a + b+c)/2;
    double res = sqrt(s*(s-a)*(s-b)*(s-c));
}


int main()
{
    int a,b,c;
    cin>>a;
    cout<<area(a)<<endl;
    cin>>a>>b;
    cout<<area(a,b)<<endl;
    cin>>a>>b>>c;
    cout<<area(a,b,c)<<endl;
    return 0;
}






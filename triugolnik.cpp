#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,res;
cin>>a>>b>>c;
if(a+b>c && b+c>a && c+b>a)
{
    cout<<"YES";
}
else cout<<"NO";
        return 0;
}

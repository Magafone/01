#include <iostream>
#include <cmath>
using namespace std;
void swap(int a,int b,int res)
{
    res=a;
    a=b;
    b=res;
    cout<<a<<b;
}
int main()
{
int a,b;
cin>>a>>b;
swap(a,b);
cout<<a<<" "<<b;
return 0;
}




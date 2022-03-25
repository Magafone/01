#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
int n,a,b,c,d;

	cout<<"input please: ";
    cin>>n;
    a=n%10;
    b=n/1000;
    c=n/100%10;
    d=n/10%10;
    cout<<a+b+c+d;

return 0;
}

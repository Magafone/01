#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
int n;
int a=1;
int b=1;
cout<<"Input :  ";
cin>> n ;
cout<<b<<" ";

for(int i = 1 ; i < n-1 ; i++)
{ //Output
    cout<<a<<" ";
    a =a + b;
    b = a - b;
}
    return 0;
}


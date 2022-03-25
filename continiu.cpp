#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
int a=1,b=10;
while(a<=b)
{
    a++;
if(a%2==0){continue;}
cout<<a<<" ";
}
    return 0;
}

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
float i, n=1, sum=0,cnt=0;
while(n!=0)
{
    cin>>n;
    sum=sum+n;
    if(n==0){break;}
    cnt++;
}
cout<<sum/cnt;
return 0;
}

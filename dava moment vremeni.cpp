#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int s1,m1,c1,s2,m2,c2,res,sum;
cin>>s1>>m1>>c1>>s2>>m2>>c2;
res=(s1*3600)+(m1*60)+(c1%60);
sum=(s2*3600)+(m2*60)+(c2%60);
cout<<abs(res-sum);
return 0;
}


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int a,b,c,d,res,res2,res3;
cin>>a>>b>>c>>d;
res=a*100;
res2=c*100;
res=res+b;
res2=res2+d;
res3=abs(res-res2);
cout<<res3/100<<" "<<res3%100;
        return 0;
}





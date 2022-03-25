#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int n,res=0,sum=0,j,a;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     for(j=1;j<i;j++)
     {

         cout<<j<<"+";
         sum=sum+j;

     }

cout<<i<<"="<<sum+i<<endl;
res=res+sum+i;
 sum=0;
 }
 cout<<endl;
 cout<<"The sum of the above series is : "<<res;
 cout<<endl;
return 0;
}


#include <iostream>
#include <cmath>
using namespace std;

double summa(double n)
{
double res=0;
  for(int i= 0; i<=n;i++)
   {
       res=res+pow(-1,i) / (2*i+1);

   }

res=sum1(res);
return res;

}

int main()
{
   double n,c;
   cin>>n;
   c=summa(n);
   cout<<c;
     return 0;
}


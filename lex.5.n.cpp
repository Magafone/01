#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{

    int a,b,res=1;
    cin>>a>>b;
   //cout<<pow(a,b);
   for(int j = 1; j <= b; j++)
   {
       res = res * a;
   }
   cout<<res;

    return 0;
}





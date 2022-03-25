#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{

    int a,res=0;
    cin>>a;
   //cout<<pow(a,b);
   for(int j = 1; j <= a; j++)
   {
       res =res + j*j;
   }
   cout<<res;

    return 0;
}






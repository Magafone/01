#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
   int n,res,sum;
   cin>>n;
   res = n/3600;
   sum =n/60%60;
   cout<<"It is "<<res<<" hours "<<sum<<" minutes.";
    return 0;

}






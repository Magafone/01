
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,c,res=1;
    cin>>n>>c;
    for(int i = 1 ; i <= c ; i++)
    {
        res = res * n;
    }
      cout<<res<<endl;
   return 0;

}




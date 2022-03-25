#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n,i,res = 0;
    cin>>n;
    for(i=1; i<=n; i++)
    {
       res=res+i*i;
    }

    cout<< res;


    return 0;
}

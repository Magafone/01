#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,res=1;
    bool found=false;
    cin>>n;
    for(int i=0; i<=n; i++)
    {
        res = pow(2,i);
        if(res == n)
        {
            found = true;
            break;
        }
    }
    if(res == true)
        cout<<"YES";
    else cout<<"NO";
    return 0;
}


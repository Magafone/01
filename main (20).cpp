
#include <iostream>

using namespace std;
double daraja(double a, int n)
{
    int i, res=1;
    for(i=1;i<=n; i++)
    {
        res=res*a;
    }
    return res;
    
}
int main()
{
    int i, n, res=1;
    double a;
    cin>>a>>n;
    cout<<daraja(a,n);

    return 0;
}

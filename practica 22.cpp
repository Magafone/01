#include <iostream>
#include <cmath>
using namespace std;
int stepen(int a, int n)
{

    int i,res=1;
    for(i=1;i<=n;i++)
    {
        res=res*a;
    }
    return res;

}

int main()
{
int a,n,b;
cin>>a>>n;
cout<<stepen(a,n);
return 0;
}

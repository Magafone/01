#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n,k,res;
    cin>>n>>k;
    res=(n-k%n)%n;
    cout<<res;
    return 0;
}



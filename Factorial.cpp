#include <iostream>
#include <algorithm>
int factorial(int n)
{
    int f=1;
    for (int i = 1; i <= n; i++)
    {
        f=f*i;
    }
    return f;
}
using namespace std;
int main()
{
    int n,c;
    cin >> n;
 c= factorial(n);
    cout<<c<< endl;
    return 0;
}

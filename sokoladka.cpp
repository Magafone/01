#include <iostream>
using namespace std;
int main()
{
    int k, n, m;
    cin >> k;
    cin >> n;
    cin >> m;
    if (((k = n) && (k % m == 0)) || ((k = m) && (k %n == 0))||(((k==m)&(n==1)) || ((k == n)&(m == 1))))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return(0);
}

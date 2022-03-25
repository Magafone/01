#include <iostream>
using namespace std;
int main()
{
    int n, res=1, Petya;
    cin>>n;
    int row[n];
    for(int i=0; i<n; i++)
    {
      cin>>row[i];
    }
    cin>>Petya;
    for (int i=0; i<n; i++)
    {
        if (row[i]>=Petya)
        {res++;}
    }
    cout<<res;
    return 0;
}

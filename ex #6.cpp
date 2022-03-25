
#include <iostream>
#include <algorithm>
using namespace std;//How find summa of number and counte them
int main()
{
    int n,res;
    cin>>n;
    int my[n];
    for(int i=0;i<n;i++)
    {
        cin>>my[i];
    }
sort(my,my+n);
 for(int i=0;i<n;i++)
    {
cout<<my[i];
    }

    return 0;
}

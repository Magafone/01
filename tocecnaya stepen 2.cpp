#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        c=pow(2,i);
 if(c==i)
 {
     cout<<"YES";
     break;
 }else cout<<"NO";
 break;
    }
    return 0;

}

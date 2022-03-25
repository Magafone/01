#include <iostream>
using namespace std;
int main()
{
    int a,res=0,p;
    cin>>a;
    int aray[a];
    for(int i=0;i<a;i++)
    {
        cin>>aray[i];
    }
    cin>>p;
    for(int i=0;i<a;i++)
    {
        if(p==aray[i]){res++;}
    }
    cout<<res;


    return 0;
}
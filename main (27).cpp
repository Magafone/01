#include<iostream>
using namespace std;
int main()
{
  int n, i, res=0;
  cin>>n;
  int aray[n];
  for(i=0; i<n; i++)
  {
      cin>>aray[i];
  }
  {
  for(i=1; i<n-1; i++)
    {
     if(aray[i]> aray[i-1] && aray[i]>aray[i+1]){res++;}
    }
     cout<<res;

  }
    return 0;
}
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
  for(i=1; i<n; i++)
    {
     if(aray[i]>aray[i-1]){res=res+1;}
    }
    cout<<endl;
    cout<<res;
  }
  return 0;
}
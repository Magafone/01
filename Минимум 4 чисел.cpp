#include<iostream>
using namespace std;//function finding minimum number
int minm(int a,int b,int c,int d){
  int n,m;
  if(a<=b and a<=c and a<=d)
  {return a;}
  else if(b<=a and b<=c and b<=d)
  {return b;}
  else if(c<=b and c<=a and c<=d)
  {return c;}
   else
  {return d;}
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<<minm(a,b,c,d)<<endl;
 return 0;
}
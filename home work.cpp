#include<iostream>
using namespace std;//function finding minimum number
int minm(int a,int b,int c,int d){
  int n,m;
  if(a<=b && a<=c && a<=d)
  {return a;}
  else if(b<=a && b<=c && b<=d)
  {return b;}
  else if(c<=b && c<=a && c<=d)
  {return c;}
   else
  {return d;}
}
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    cout<< minm(a,b,c,d)<<endl;
 return 0;
}

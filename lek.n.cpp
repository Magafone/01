#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
  int a,b,c;
  cin>>a>>b;
  //c=(a>b)? a:b;//leksiya znak ? eto kak if rabotayet inline condition;
  if(a>b)c=a;
  else c=b;
    cout<<c;
    return 0;
}

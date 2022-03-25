#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int x, y, x1, y1,a,b;
  cin>>x>>y>>x1>>y1;
  a=abs(x1-x);
  b=abs(y-y1);
  if(a<2 and b<2)
  {
      cout<<"YES"<<endl;
  }
  else { cout<<"NO"<<endl;}
  return 0;
}

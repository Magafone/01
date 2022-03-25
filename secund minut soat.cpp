#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
  int  m, s,n,soat;
  cin>>n;
  s=n%60;
  m=n/60%60;
  soat=n/60/60;
  cout<<"SOAT :"<<soat%24<<"   :  "<<"MINUT   :"<<m<<"   :  "<<"SECUND    "<<s<<":";
   return 0;
}



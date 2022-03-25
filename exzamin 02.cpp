#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()

{
  int a,i;
  int aray[7];
  for(i=0; i<=6;i++)
  {
      cout<<"Array ["<<i<<"] = ";
      cin>>aray[i];
      cout<<endl;
  }
  cout<<"Array = {";
for(int i=0;i<10;i++)
{
    cout<<aray[i]<<",";

}
   cout<<aray[i]<<"}";
    return 0;
}


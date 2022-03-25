
#include <iostream>
using namespace std;//Максимум в массиве

int main()
{
 int n,Max;
 cin>>n;
 int Line[n];
 for(int i=0;i<n;i++)
 {
  cin>>Line[i];
 }
 Max = Line[0];
 for(int i=1;i<n;i++)
 {
  if(Max < Line[i]) Max = Line[i];
 }
 cout <<Max<<endl;
 return 0;
}

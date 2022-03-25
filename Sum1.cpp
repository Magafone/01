#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      sum+=1/(pow(i,2));
    }
       cout<<sum;
  return 0;
}

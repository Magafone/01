#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  int n, counter=0;
  cout<<"Input pleas : ";
  cin>>n;
  for(int i=1;i<=n;i++)
  {

      if(n % i==0)
        counter++;

  }
if(counter==2) cout<<"prime number : "<<n;
else cout<<"not prime number : "<<n;
    return 0;
}

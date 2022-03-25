#include <iostream>
using namespace std;

int
main () 
{
  
long long int n, a;
  
cin >> n;
  
if (n < 0)
    {
      
a = ((-1 + n) * n) / 2;
      
a = (a - 1) * -1;
    
}
  
  else
    {
      
a = ((1 + n) * n) / 2;
    
}
  
cout << a;
  
return 0;

}

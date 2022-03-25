#include <iostream>
#include <cmath>
using namespace std;

 
int
main () 
{
  
while (true)
    {
      
int a;
      
cin >> a;
      
if (a == 0)
	continue;
      
for (int i = 1; i <= 10; i++)
	{
	  
cout << a << "*" << i << "=" << a * i << endl;
    
} 
} 
return 0;

}

#include <iostream>
#include <cmath>
using namespace std;

int
main ()
{

int a, b, c;

cin >> a >> b >> c;

if (a % 2 == 0 and b % 2 == 1)
    {
      cout << "YES";
    }

  else if (a % 2 == 0 and c % 2 == 1)
    {
      cout << "YES";
    }


  else if (a % 2 == 1 and b % 2 == 0)
    {
      cout << "YES";
    }

  else if (a % 2 == 1 and c % 2 == 0)
    {
      cout << "YES";
    }


  else if (b % 2 == 0 and c % 2 == 1)
    {
      cout << "YES";
    }

  else if (c % 2 == 0 and b % 2 == 1)
    {
      cout << "YES";
    }


  else if (b % 2 == 1 and c % 2 == 0)
    {
      cout << "YES";
    }

  else if (c % 2 == 1 and b % 2 == 0)
    {
      cout << "YES";
    }
    else {
        cout<< "NO";
    }

return 0;

}



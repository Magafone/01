#include <iostream>
#include <cmath>
using namespace std;

int
main ()
{
  int a, i, n;
  cin >> a;
  n = 0;
  for (i = 1; i <= a; i++)
    {
      n = n + i;
    }
  cout << a << endl;

  return 0;
}

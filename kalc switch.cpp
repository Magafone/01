#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  int k,l;
  k=0;
  l=0;
  char s;
  cin>>k>>s>>l;
  switch(s)
  {
  case '+':
    cout<<k+l;
    break;

      case '-':
    cout<<k-l;
    break;

    case '*':
    cout<<k*l;
    break;

    case '/':
    cout<<k/l;
    break;

    case '%':
    cout<<k%l;
    break;

    case '^':
    cout<<pow(k,l);
    break;



  }





return 0;

}

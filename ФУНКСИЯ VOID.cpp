#include <iostream>
#include  <cmath>
int Sum(int a, int b);
using namespace std;
int Sum(int a, int b){
    return a + b;
}

int main()
{
int a,b;
cin>>a>>b;
int total = Sum(a,b);
 
 cout<<total;
    return 0;
}

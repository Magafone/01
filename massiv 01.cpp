#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
int a, b, c,res=0;
cin>>a;
b=a;
cout<<"vedite rastoyaniye v santimetrah"<<" "<<  b<<endl;
cout<<"Rastoyaniye v metrah:"<<b/100<<endl;
res=res+b;
cout<<"Rastoyaniye v kilometrah:"<<float(res/1000);
    return 0;
}

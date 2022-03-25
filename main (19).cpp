#include <iostream>
using namespace std;
int Agajan(int a)
{
    int n = 0;
    for(int i = 1; i <=a;i++)
   { if(a % i==0) n++;}
   return n;

}


int main()
{
 int a;
    cin>>a;
   if(Agajan(a)==2)
       cout<<"prime";
   else cout<<"composite";
return 0;
}

#include <iostream>
using namespace std;
int Agajan(int a)
{
    int n = 0;
    for(int i = 2; i < a;i++)
   { if(a % i==0 && a!=2) n++;}
   return n;
    
}


int main()
{
 int a;                               
    cin>>a;                              
   if(Agajan(a)==0) 
       cout<<"prime";     
   else cout<<"composite";               
return 0;
}

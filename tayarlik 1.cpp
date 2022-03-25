#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
 int n,res=1;
 cin>>n;
 int array[n];
 for(int i=0;i<n;i++)
 {

     cin>>array[i];

 }
   for(int i=0;i<n;i++)
 {

   if(array[i]%2==0)


       cout<<array[i]<<" ";


 }








    return 0;
}

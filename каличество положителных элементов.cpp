#include <iostream>

 using namespace std;

 
 
int
main ()
{
  
int n,res=0;
cin>>n;
int array[n];


for(int i=0;i<n;i++)
{
    cin>>array[i];
}

for(int i=0;i<n;i++)
{
    if(array[i]>0)
   {res=res+1;}
}
cout<<res<<endl;

return 0;

}
#include <iostream>
using namespace std;
main()
{
int a,b,c,d;
cin>>a>>b>>c>>d;
if(c-a==1 || d-b==1 || -(c-a)==1 || -(d-b)==1 )

cout<<"YES";

else cout<<"NO";
}

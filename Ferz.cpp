#include <iostream>
using namespace std;
main()
{
    //FERZ;
int a,b,c,d;
cin>>a>>b>>c>>d;
if(a==c||b==d||a-c==b-d||c-a==d-b||-(a-c)==b-d||-(c-a)==d-b)

cout<<"YES";

else cout<<"NO";
}

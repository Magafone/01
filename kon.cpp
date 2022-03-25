#include <iostream>
using namespace std;
main()
{

int a,b,c,d;
cin>>a>>b>>c>>d;
if(a+2==c&&b+1==d||a+1==c&&b+2==d||a-1==c&&b+2==d||a-2==c&&b+1==d||a-2==c&&b-1==d||a-1==c&&b-2==d||a+1==c&&b-2==d||a+2==c&&b-1==d)
    cout<<"YES";
else cout<<"NO";
}

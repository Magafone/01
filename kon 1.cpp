#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int x1,x2,y1,y2,a,b;
    cin>>x1>>y1>>x2>>y2;
    a=abs(x1-x2);
    b=abs(y1-y2);
    if (a==1&&b==2||a==2||b==1)
        cout<<"YES";

else cout<<"NO";
        return 0;
}





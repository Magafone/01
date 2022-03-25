
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a <= b && b<= c) {
        cout<<a<<" "<<b<<" "<<c;
    }
    else if(a<=b b>=c){
        cout<<a<<" "<<c<<" "<<b;
    }
    else if(a >= b && b <= c){
        cout<<b<<" "<<a<<" "<<c;
    }
    else if(a <=b && b >=c ){
        cout<<c<<" "<<a<<" "<<b;
    }
    else if(a >= b && b <= c ){
        cout<<b<<" "<<c<<" "<<a;
    }
       else if(a >= b && b <= c ){
        cout<<b<<" "<<c<<" "<<a;
    }
     else {
        cout<<c<<" "<<b<<" "<<a;
    }
    return 0;
}


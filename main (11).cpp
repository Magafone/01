
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b;
    for(c=a; c<=b; c++){
        if (c%2==0){
            cout<<c<<" "<<endl;
        }
    }

    return 0;
}

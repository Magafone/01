#include <iostream>
#include <cmath>
using namespace std;
    int step (int a, int b)
        {
        return a*=b;
        }
    int main()
    {
        int a,b,result;
        cin>>a>>b;
        for(int i=1; i<=b; i++)
        result = pow(a,b);
        cout<<result<<endl;
        cout<<endl;
        return 0;
    }
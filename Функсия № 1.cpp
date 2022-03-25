#include <iostream>
using namespace std;
double stepen(double a,int b)
{
    double stepen=a;
    if(b==0){
        stepen=1;
    }
    else{
        for(int i=1;i<b;i++)
        stepen*=a;
    }
    return stepen;
}
    int main ()
{
    int b;
    double a;
    cin>>a>>b;
    double res=stepen(a,b);
    cout<<res;
    return 0;
}
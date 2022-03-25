#include <iostream>
#include <cmath>
int Prime(int a){
    long long int i,res=0;
    for(i=1;i<=a;i++)
        {
        if(a%i==0){res++;}
        }
        return res;
}
using namespace std;
int main(){
    int a;
    cin>>a;
        if(Prime(a)==2){cout<<"Prime"<<endl;}
        else cout<<"Composite"<<endl;
    return 0;
}
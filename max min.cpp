#include <iostream>
#include <cmath>

using namespace std;
int main(){
     int n, i, min=10, max=0, last, j;
     cin>>n;
     j=n;
     while (n!=0){
        last=n%10;
        if(last<min){min=last;}
        n=n/10;
     }

     while(j!=0){
        last=j%10;
        if(last>max){max=last;}
        j=j/10;

     }cout<<min<<" "<<max<<endl;

return 0;
}
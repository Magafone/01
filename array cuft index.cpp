#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int num,d;
    cin>>num;

    int array[num];
    for(int i=0; i<num; i++)
    {
        cin>>array[i];
    }

    for(int i=0;i<num-1;i=i+2){
            d=array[i];
            array[i]=array[i+1];
            array[i+1]=d;
    }
     cout<<array[num-1]<<" ";
    for(int i=0;i<num-1;i++){
             cout<<array[i]<<" ";

   }

    return 0;
}

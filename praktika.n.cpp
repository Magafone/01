#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    int n,number, max;
    cout<< "How many elements : ";
    cin>>n;

    cout<< 1 <<" element :";
    cin>>number;
    max = number;
    for(int i=2; i<=n; i++)
    {
         cout<< i <<" element :";
        cin>>number;
        if(number > max) max = number;
    }


    cout<<"Maximum is "<<max;

    return 0;
}

#include <iostream>
using namespace std;
int
main ()
{
    int n;
    cin>>n;
    int array[n];


    for(int i=0; i<n; i++)
    {
        cin>>array[i];
    }

    for(int i=0; i<n; i++)
    {
        if(i%2==0)
            cout<<array[i]<<" ";
    }


    return 0;

}

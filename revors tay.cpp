

#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>> n;
    int numbers[n];
    for(int i=0; i<n; i++)
    {
        cin>>numbers[i];
    }
        reverse(numbers,numbers+n);
        for(int i=0; i<n; i++)
        {
            cout<<numbers[i]<<" ";
        }

    return 0;
}

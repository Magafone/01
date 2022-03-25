#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int MinDigit(int n)
{
    int rem = 0,  min = 9;
    while(n != 0)
    {
        rem = n %10;
        if(rem < min) min  = rem;
        n = n /10;
    }

    return min;
}

int MaxDigit(int n) // 345
{
    int rem, max = 0;

    while( n != 0){

        rem  = n %10;
        if(rem > max) max = rem;
        n = n /10;
    }

    return max;
}

int main()
{

    int a,min,max;
    cin>>a; // 123
    min = MinDigit(a);
    max = MaxDigit(a);

    cout<< "Max is "<<max<<endl;
    cout<< "Min is "<<min<<endl;


}

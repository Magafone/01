#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int h(int n)
{
    if (2022-n>18)
        {return 1;}
        else {return 0;}
}


int main()
{
int n;
cout<<"Vedite god rojdeniya :";
cin>>n;
if(h(n)==1)
{
    cout<<"Dobro pojalovat vam "<<2022-n <<"  let, vi mojete rabotat:";
}
else
{
    cout<<"Zdrastivuyte, vam " <<2022-n<< "  let, k sojeleniyu mi ne mojem vas prunyat";
}
    return 0;
}



#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{

    int n;
    cout<<"Input your number tablitsa  ";
    cin>>n;
    for(int j = 1; j <= n; j++)
    {
        cout<<"product table of  "<<j<<endl;

        for(int i = 1; i <= 10 ; i++)
        {
            cout<< j <<" * "<< i <<" = "<< j * i <<endl;
        }
    }
    return 0;
}




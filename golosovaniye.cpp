#include <iostream>
using namespace std;
/*int zero()
{
    int i, n, nol=0, yak=0;

    for(i=1;i<=3;i++)
    {
        cin>>n;
        if(n==0){nol++;}
        else {yak++;}

    }
    if(nol>yak){cout<<0;}
    else {cout<<1;}

}

int main()
{
   zero();


    return 0;
}
*/
int zero (bool x,bool y,bool z)
{
    if(x==0 and y==0){return 0;}
    else if(x==0 and z==0){return 0;}
    else if(y==0 and z==0){return 0;}

 else if(y=1 and z==1){return 1;}
 else if(x=1 and y==1){return 1;}
 else if(x=1 and y==1){return 1;}
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<zero(x,y,z);
}

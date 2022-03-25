 #include <iostream>
 #include <cmath>
 using namespace std;
int main()
{

 int n, a, b, c;
cin>>n;
a=n/3600;
b=n%3600/60;
c=n%3600%60;
cout<<a%24<<":"<<b<<":"<<c;

    return 0;
}





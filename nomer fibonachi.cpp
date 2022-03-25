#include <iostream>
using namespace std;

int fib(int n){
    int a = 0;
    int res = 1;
    int f0 = 1;
    int i = 0;
    while (i <= n){
        res = f;
        f = f0 + f;
        f0 = res;
        i++;
        if (n == f)
            return i;
    }
    if (n == 0)
        return 0;
    else return -1;
}

int main(){
    int n;
    cin >> n;

    cout << fib(n);
    return 0;
}

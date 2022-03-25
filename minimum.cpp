#include <iostream>

using namespace std;

int main() {
    int N,min;
    cin >> N;
    min = N;

    int i,x;
    for (i = 1; i <= N; ++i) {
        cin >> x;

        if ( x < min ) {
            min = x;
        }
    }
        cout<<min;
        return 0;
    }
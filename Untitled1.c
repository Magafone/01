
#include <cmath>
#include <iostream>
using namespace std;

bool Election(bool x, bool y, bool z) {
    return x + y + z >= 2;
}

int main(void)
{
    int n;
    bool x, y, z;
    cout << "n = ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "x,y,z = ";
        cin >> x >> y >> z;
        cout << Election(x, y, z) << endl;
    }
    system("pause");
    return 0;
}

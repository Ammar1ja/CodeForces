#include <iostream>
using namespace std;
int main(void)
{
    long long x, y;
    cin >> x >> y;
    if ((x >= 1 && x <= 100000) && (y >= 1 && y <= 100000))
    {

        cout << x << " + " << y << " = " << x + y << endl;
        cout << x << " * " << y << " = " << x * y << endl;
        cout << x << " - " << y << " = " << x - y;
    }
}
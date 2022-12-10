#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a, b, ans;
    cin >> a >> b;
    ans = a / b;
    cout << "floor " << a << " / " << b << " = " << floor(ans) << endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(ans) << endl;
    cout << "round " << a << " / " << b << " = " << round(ans) << endl;
}
#include <iostream>
using namespace std;
int main()
{
    int max, min, a;

    for (int i = 0; i < 3; ++i)
    {
        cin >> a;
        if (i == 0)
        {
            max = a;
            min = a;
        }
        if (a > max)
            max = a;
        else if (a < min)
            min = a;
    }
    cout << min << " " << max << endl;
}
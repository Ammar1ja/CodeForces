#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        if (i + 1 != n)
        {
            if ((i + 1) % 2 != 0)
                cout << "I hate that ";
            else
                cout << "I love that ";
        }
        else
        {
            if ((i + 1) % 2 != 0)
                cout << "I hate it ";
            else
                cout << "I love it ";
        }
    }
}
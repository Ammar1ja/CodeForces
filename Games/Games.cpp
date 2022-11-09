#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, count = 0;
    cin >> n;

    int *home = new int[n];
    int *guest = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> home[i] >> guest[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (home[i] == guest[j] && i != j)
                count++;
        }
    }
    cout << count;
}
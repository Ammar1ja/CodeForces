#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    int ma = 0, mi = 101, maxi, mini;
    int *arr = new int[a];
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
        if (arr[i] > ma)
        {
            ma = arr[i];
            maxi = i;
        }
        if (arr[i] <= mi)
        {
            mi = arr[i];
            mini = i;
        }
    }
    if (maxi > mini)
    {
        mini++;
    }
    cout << maxi + (a - 1) - mini;
}
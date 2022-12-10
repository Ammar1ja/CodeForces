#include <iostream>
using namespace std;
void evenIndices(long long arr[], long long n)
{
    if (n < 0)
        return;
    else
    {
        if ((n - 1) % 2 == 0)
        {
            cout << arr[n - 1] << " ";
        }
    }
    evenIndices(arr, --n);
}
int main()
{
    long long n;
    cin >> n;
    long long *arr = new long long[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    evenIndices(arr, n);
}
#include <iostream>
using namespace std;
int findMax(long long arr[], long long n, long long i, int max)
{

    if (i > n)
    {
        return max;
    }

    else
    {
        if (arr[i] > max)
            max = arr[i];

        return findMax(arr, n, ++i, max);
    }
}
int main()
{
    long long n, i = 0;
    cin >> n;
    long long *arr = new long long[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    int max = arr[0];
    cout << findMax(arr, n, i, max) << endl;
}
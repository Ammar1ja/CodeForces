#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    int n, m;
    cin >> n >> m;
    int *arr = new int[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + m);
    int least = arr[n - 1] - arr[0];
    for (int i = 1; i < m - n; i++)
    {
        if (arr[n + i - 1] - arr[i] < least)
            least = arr[n + i - 1] - arr[i];
    }
    if (least == 1)
        cout << 0 << endl;
    else
        cout << least << endl;
}
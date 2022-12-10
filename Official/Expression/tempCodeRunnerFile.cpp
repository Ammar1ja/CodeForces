#include <iostream>
using namespace std;
int main()
{
    int n = 3, max;
    int *arr = new int[n];
    int *arr2 = new int[4];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < 5; j++)
    {
        if (j == 0)

            arr2[j] = arr[0] + arr[1] * arr[2];

        else if (j == 1)

            arr2[j] = arr[0] * (arr[1] + arr[2]);

        else if (j == 2)

            arr2[j] = (arr[0] + arr[1]) * arr[2];

        else if (j == 3)

            arr2[j] = arr[0] * arr[1] * arr[2];
        else if (j == 4)

            arr2[j] = arr[0] + arr[1] + arr[2];
    }
    max = arr2[0];
    for (int k = 0; k < 5; k++)
    {
        if (arr2[k] > max)
            max = arr2[k];
    }
    cout << max;
}
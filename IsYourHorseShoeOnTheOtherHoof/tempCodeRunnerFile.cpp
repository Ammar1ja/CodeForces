#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int *arr = new int[4];
    double count = 0, n = 4;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 1; k < n; k++)
        {
            if (arr[j] == arr[k])
                count++;
        }
    }
    cout << ceil(count / 4);
}
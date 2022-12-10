#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int hight = 1, highest = 1;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n - 1; j++)
    {
        if (arr[j] <= arr[j + 1])
        {
            hight++;
            if (hight > highest)
            {
                highest = hight;
            }
        }
        else
            hight = 1;
    }
    cout << highest;
}

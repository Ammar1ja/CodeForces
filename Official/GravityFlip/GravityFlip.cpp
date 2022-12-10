#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] > arr[k])
            {
                char temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
    }
    for (int l = 0; l < n; l++)
    {
        cout << arr[l] << " ";
    }
}
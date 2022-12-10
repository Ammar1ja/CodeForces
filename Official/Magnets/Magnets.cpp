#include "iostream"
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == arr[j + 1])
            counter++;
    }
    cout << n - counter;
}
#include <iostream>
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;
    int *arr = new int[n];
    int *arr2 = new int[n];
    //getting values
    for(int l=0;l<n;l++)
    {
        cin >> arr[l];
    }
    // +
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {
                arr2[counter] = j + 1;
                counter++;
            }
        }
    }
    // print result
    for(int k=0;k< n;k++)
    {
        cout << arr2[k]<<" ";
    }
}
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int count = 0,count1 = 0 ,n = 4;
    int *arr = new int[4];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = j + 1; k < n; k++)
        {
            if (arr[j] == arr[k])
                count++;
        }
    }
    while(count != 0)
    {
        count = count / 2;
        count1++;
    }
    cout << count1;
}
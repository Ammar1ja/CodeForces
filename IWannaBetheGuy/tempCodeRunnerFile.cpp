#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n, p, q;
    int arr[250];
    cin >> n >> p;
    // getting p values
    for (int i = 0; i < p; i++)
    {
        cin >> arr[i];
    }
    cin >> q;
    int total = p + q;
    // getting q values
    for (int j = p; j < p + q; j++)
    {
        cin >> arr[j];
    }
    // bubble remove duplicated numbers
    for (int k = 0; k < p + q; k++)
    {
        for (int l = k + 1; l < p + q; l++)
        {
            if (arr[k] == arr[l])
                total--;
        }
    }
    if (total == n)
        cout << "I become the guy.";

    else
        cout << "Oh, my keyboard!";
}
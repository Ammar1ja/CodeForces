#include <iostream>
using namespace std;
int main(void)
{
    int t, n, c;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        c = n;
        int *array = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> array[j];
        }
        if (n <= 2)
        {
            cout << 1 << endl;
        }
        else
        {
            int max, min;
            max = array[0];
            min = array[0];
            for (int i = 0; i < n; i++)
            {
                if (array[i] > max)
                {
                    array[i] = max;
                }
                else if (array[i] < min)
                {
                    array[i] = min;
                }
            }
            if (max == min)
            {
                cout << 1 << endl;
            }
            else
            {
                for (int k = 0; k < n - 1; k++)
                {
                    if (array[k] < max && array[k] > min)
                    {
                        c--;
                    }
                }
                cout << c << endl;
            }
        }
    }
}

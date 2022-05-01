#include <iostream>

using namespace std;

int main(void)
{
    int n, t;
    cin >> n >> t;
    char *array = new char[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            char temp;
            if (array[j] == 'B' && array[j + 1] == 'G')
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                j++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << array[i];
    }
}
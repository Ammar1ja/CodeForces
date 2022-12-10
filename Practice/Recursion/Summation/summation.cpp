#include <iostream>
using namespace std;

void sum(int size, int array[], int i = 0, int m = 0)
{
    if (size == 0)
    {
        cout << m;
        return;
    }
    else
    {
        m += array[i];
        sum(--size, array, ++i, m);
    }
}
int main()
{
    int size;
    cin >> size;
    int *array = new int[size];
    for (int i = 0; i < size; ++i)
    {
        cin >> array[i];
    }
    sum(size, array);
}

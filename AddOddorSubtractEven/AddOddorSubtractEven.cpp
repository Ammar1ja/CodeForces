#include <iostream>

using namespace std;
int main()
{
    int t;
    long long int a, b, counter, dis;
    cin >> t;
    int *arr = new int[t];
    for (int i = 0; i < t; i++)
    {
        counter = dis = 0;
        cin >> a >> b;
        if (a == b)
        {
            arr[i] = counter;
            continue;
        }
        if (a > b)
        {
            dis = a - b;
            counter++;
            if (dis % 2 != 0) // odd
            {
                counter++;
            }
            arr[i] = counter;
        }
        else if (a < b)
        {
            dis = b - a;
            counter++;
            if (dis % 2 != 1) // even
            {
                counter++;
            }
            arr[i] = counter;
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << arr[i] << endl;
    }
}
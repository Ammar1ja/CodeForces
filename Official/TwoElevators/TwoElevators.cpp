#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, a, b, count = 0;
    cin >> n;
    int arr[3];
    int *answer = new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] == 1)

            answer[count++] = 1;

        else
        {
            a = arr[0] - 1;
            b = abs(arr[1] - arr[2]) + abs(arr[2] - 1);
            if (a == b)

                answer[count++] = 3;

            else if (a < b)

                answer[count++] = 1;

            else

                answer[count++] = 2;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << answer[i] << endl;
    }
}
#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        if (n % 10 == 0)
            n /= 10;
        else
            n--;
    }
    cout << n;
}
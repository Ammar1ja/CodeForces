#include <iostream>
using namespace std;
int main()
{
    long long n, sum = 0;
    cin >> n;
    while (n--)
    {
        sum += n + 1;
    }
    cout << sum << endl;
}
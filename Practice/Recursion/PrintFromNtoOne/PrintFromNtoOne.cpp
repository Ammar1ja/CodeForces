#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    else if (n == 1)

        cout << n;

    else
    {
        cout << n << " ";
    }
    return print(--n);
}
int main()
{
    int n;
    cin >> n;
    print(n);
}
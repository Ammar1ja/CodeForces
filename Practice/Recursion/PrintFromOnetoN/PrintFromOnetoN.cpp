#include <iostream>
using namespace std;
void print(int n, int i)
{

    if (i > n)
        return;
    else
    {
        cout << i << endl;
    }
    return print(n, ++i);
}
int main()
{
    int n, i = 1;
    cin >> n;
    print(n, i);
}
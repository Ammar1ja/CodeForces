#include <iostream>
using namespace std;
void print(int n)
{
    if (n == 0)
        return;
    else
    {
        cout << "I Love Recursion" << endl;
    }
    return print(n - 1);
}
int main()
{
    int n;
    cin >> n;
    print(n);
}
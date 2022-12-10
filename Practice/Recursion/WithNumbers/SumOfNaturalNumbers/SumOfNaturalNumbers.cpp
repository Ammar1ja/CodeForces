#include <iostream>
using namespace std;
int naturalSum(int x)
{
    if (x <= 1)
        return x;
    else
        return x + naturalSum(x - 1);
}
int main()
{
    cout << naturalSum(10);
}
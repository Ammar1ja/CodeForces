#include <iostream>
using namespace std;
// جد القوة ثم التكرار
// ناتح القوة = تكرار
// ناتج التكرار = تكرار
int multiply(int x, int y)
{
    if (y)
        return (x + multiply(x, y - 1));
    else
        return 0;
}
int pow(int a, int b)
{
    if (b)
        return multiply(a, pow(a, b - 1));
    else
        return 1;
}
int main()
{
    cout << pow(2, 3);
}
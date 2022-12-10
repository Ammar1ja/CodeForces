#include <iostream>
using namespace std;
string decimalToBinary(int n, string result)
{
    if (n == 0)
        return result;
    result = to_string(n % 2) + result;
    return decimalToBinary(n / 2, result);
}

int main()
{
    cout << decimalToBinary(233, "");
}

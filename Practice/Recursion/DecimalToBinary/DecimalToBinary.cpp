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
    int n, t;
    cin >> n;
    string *arr = new string[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> t;
        arr[i] = decimalToBinary(t, "0");
    }
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << endl;
    }
}

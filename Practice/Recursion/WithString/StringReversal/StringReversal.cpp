#include <iostream>
using namespace std;
string stringReversal(string s, int n)
{
    if (n < 0)
    {
        return "";
    }
    else
        return s[n] + stringReversal(s, n - 1);
}
int main()
{
    cout << stringReversal("abcd", 4);
}
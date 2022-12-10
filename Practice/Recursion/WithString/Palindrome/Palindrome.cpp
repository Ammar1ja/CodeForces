#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(string s)
{
    int n = s.length() - 1;
    if (n == 0 || n == 1)
        return true;
    if (s[0] == s[n])
        return isPalindrome(s.substr(1, n - 1));
    return false;
}
int main()
{
    string s;
    cin >> s;
    if (isPalindrome(s) == true)
        cout << "YES";
    else
        cout << "NO";
}
#include <iostream>
#include <string>
using namespace std;
void digit(string s)
{
    int n = 0;
    if (n == s.length())
    {
        return;
    }
    else
    {
        cout << s[0] << " ";
        digit(s.substr(++n, s.length() - 1));
    }
}
int main()
{
    int n;
    cin >> n;
    string *arr = new string[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; ++i)
    {
        string t = arr[i];
        digit(t);
        cout << endl;
    }
}
#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int count=0;
    string t, s;
    cin >> t >> s;
    for (int i = 0; i < t.size(); i++)
    {
        if (t[i] == s[t.size() - 1 - i])
            count++;
    }
    if (count == t.size())
        cout << "YES";
    else
        cout << "NO";
}
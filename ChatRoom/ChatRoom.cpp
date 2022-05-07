#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string s, t;
    cin >> s;
    if (s.length() >= 1 && s.length() <= 100)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'h' || s[i] == 'e' || s[i] == 'l' || s[i] == 'o')
                t += s[i];
        }

        if (t == "helo")
            cout << "YES";
        else
            cout << "NO";
    }
}
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main(void)
{
    int counter = 0;
    string s;
    getline(cin, s);
    sort(begin(s), end(s));
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '{' || s[i] == ',' || s[i] == ' ' || s[i] == '}')
            continue;
        if (s[i] != s[i + 1])
            counter++;
    }
    cout << counter;
}

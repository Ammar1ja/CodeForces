#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int n, counter = 0;
    string s;
    cin >> n >> s;
    if (n < 26)
    {
        cout << "NO";
    }
    else
    {
        for (int i = 0; i < 26; i++)
        {

            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'a' + i || s[j] == 'A' + i)
                {
                    counter++;
                    break;
                }
            }
        }
        if (counter == 26)
            cout << "YES";
        else
        {
            cout << "NO";
        }
    }
}

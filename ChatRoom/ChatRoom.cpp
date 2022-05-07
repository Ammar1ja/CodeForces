#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count=0, j = 0;
    string s, word = "hello";
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == word[j])
        {
            j++;
            count++;
            
            
            if (count == 5)
            {
                break;
            }
        }
    }
    if (count == 5)
        cout << "YES";
    else
        cout << "NO";
}

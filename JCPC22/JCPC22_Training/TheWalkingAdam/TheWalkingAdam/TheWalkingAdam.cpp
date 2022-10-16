#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int n, counter = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'D')
                break;
            else
                counter++;
        }
        cout << counter << endl;
        counter = 0;
    }
}
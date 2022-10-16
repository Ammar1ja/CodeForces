#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    int count = 0;
    string n;
    cin >> n;
    if (n[0] <= 122 && n[0] >= 97 || n[0] <= 90 && n[0] >= 65) // first letter small ?
    {
        for (int i = 1; i < n.size(); i++)
        {
            // is capital ?
            if (n[i] >= 65 && n[i] <= 90)
                count++;
        }
        int x = n.size() - 1;
        if (count == x)
        {
            for (int j = 0; j < n.size(); j++)
            {
                if (n[j] >= 65 && n[j] <= 90) // capital
                    n[j] += 32;
                else
                    n[j] -= 32;
            }
        }
        for (int k = 0; k < n.size(); k++)
        {
            cout << n[k];
        }
    }
    else
    {
        cout << n;
    }
}
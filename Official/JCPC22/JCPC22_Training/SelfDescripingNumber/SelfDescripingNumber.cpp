#include <iostream>
#include "./mylibrary.h"
using namespace std;
using namespace array;
int main(void)
{
    int t;
    string s;
    int c = 0, d = 0;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> s;
        int n = s.size();
        int *array = new int[n];
        for (int j = 0; j < n; j++)
        {
            array[j] = s[j] - '0';
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (array[j] == i)
                {
                    c++;
                }
            }
            if (c == array[i])
            {
                d++;
                c = 0;
            }
            else
            {
                break;
            }
        }

        if (d == n)
            cout << "self-describing" << endl;
        else
            cout << "not self-describing" << endl;
        d = 0;
    }
}
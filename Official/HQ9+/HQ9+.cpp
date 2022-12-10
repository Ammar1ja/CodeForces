#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count = 0;
    string n;
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == 'H' || n[i] == 'Q' || n[i] == '9')
            count++;
    }
    if (count != 0)
        cout << "YES";
    else
        cout << "NO";
}
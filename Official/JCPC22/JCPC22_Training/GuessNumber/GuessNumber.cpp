#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{

    int x = rand();
    int n = 10, count = 0;
    char answer;
    while (count < 30)
    {
        cin >> answer;
        if (answer == '=')
        {
            count++;
            break;
        }
        else if (answer == '>')
        {
            x = (rand() % x) + x;
            cout << x << endl;
            count++;
        }
        else if (answer == '<')
        {
            x = rand() % x;
            cout << x << endl;
            count++;
        }
    }

    if (answer == '=')
    {
        cout << "! " << x;
    }
    else
    {
        cout << "Idleness limit exceeded";
    }
}
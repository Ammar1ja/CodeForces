#include <iostream>
using namespace std;
int main()
{
    int n, counter = 0;
    cin >> n;
    while (n >= 100)
    {
        if (n % 100 == 0)
        {
            counter += n / 100;
            n = 0;
            break;
        }
        else
        {
            counter = n / 100;
            n %= 100;
        }
    }
    while (n >= 20)
    {
        if (n % 20 == 0)
        {
            counter += n / 20;
            n = 0;
            break;
        }
        else
        {
            counter += n / 20;
            n %= 20;
        }
    }
    while (n >= 10)
    {
        if (n % 10 == 0)
        {
            counter += n / 10;
            n = 0;
            break;
        }
        else
        {
            counter += n / 10;
            n %= 10;
        }
    }
    while (n >= 5)
    {
        if (n % 5 == 0)
        {
            counter += n / 5;
            n = 0;
            break;
        }
        else
        {
            counter += n / 5;
            n %= 5;
        }
    }
    while (n < 5)
    {
        if (n % 1 == 0)
        {
            counter += n / 1;
            n = 0;
            break;
        }
        else
        {
            counter += n / 1;
            n %= 1;
        }
    }
    cout << counter << endl;
}
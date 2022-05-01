#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int numberOfStones;
    string colors;
    cin >> numberOfStones;
    int counter = 0;
    cin >> colors;
    
    for (int i = 0; i < numberOfStones; i++)
    {
        if (colors[i] == colors[i + 1])
            ++counter;
    }
    cout << counter;
}
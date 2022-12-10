#include <iostream>
using namespace std;
int main(void)
{
    int cost, money, numberOfBananas, totalCost=0;
    cin >> cost >> money >> numberOfBananas;
    for (int i = 1; i <= numberOfBananas; i++)
    {
        totalCost += cost * i;
    }
    totalCost -= money;
    if(totalCost>0)
    cout << totalCost;
    else
    cout << 0;
}
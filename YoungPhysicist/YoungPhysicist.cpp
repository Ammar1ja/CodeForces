#include <iostream>
using namespace std;
int main(void)
{
    int sumx = 0, sumy = 0, sumz = 0, numberOfRows;
    cin >> numberOfRows;
    int *myArray = new int[numberOfRows, 3];
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> myArray[i, j];
            if (j == 0)
                sumx += myArray[i, j];
            else if (j == 1)
                sumy += myArray[i, j];
            else if (j == 2)
                sumz += myArray[i, j];
        }
    }
    if (sumx == 0 && sumy == 0 && sumy == 0)
        cout << "YES";
    else
        cout << "NO";
}
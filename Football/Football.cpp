#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string numbers;
    cin >> numbers;
    int counter = 1;
    for (int i = 0; i < numbers.length(); i++)
    {
        if (numbers[i] == numbers[i + 1])
        {
            counter++;
            if (counter >= 7)
            {
            cout << "YES";
            i = numbers.length() + 1;
            }
        }
        else
            counter = 1;
    }
    if(counter != 7 || counter < 7)
        cout<<"NO";
}

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string numbers;
    cin >> numbers;
    for (int i = 0; i < numbers.length(); i++)
    {
        for (int j = i+1; j < numbers.length(); j++)
        {
            if (numbers[i] != '+' && numbers[j] != '+')
            {
               if(numbers[i] > numbers[j])
               {
                   char temp;
                   temp = numbers[i];
                   numbers[i]=numbers[j];
                   numbers[j]=temp;
               }
            }
        }
    }
    cout << numbers;
}
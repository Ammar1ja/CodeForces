#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    int cLetters = 0, sLetters = 0;
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] >= 65 && word[i] <= 90)
        {
            cLetters++;
        }
        else if (word[i] >= 97 && word[i] <= 122)
        {
            sLetters++;
        }
    }

    if (cLetters > sLetters)
    {
        for (int j = 0; j < word.length(); j++)
        {
            if (word[j] >= 97 && word[j] <= 122)
            {
                word[j] = (word[j] - 97) + 65;
            }
        }
    }
    else if (sLetters > cLetters)
    {
        for (int k = 0; k < word.length(); k++)
        {
            if (word[k] >= 65 && word[k] <= 90)
            {
                word[k] = (word[k] - 65) + 97;
            }
        }
    }
    else
    {
        for (int k = 0; k < word.length(); k++)
        {
            if (word[k] >= 65 && word[k] <= 90)
            {
                word[k] = (word[k] - 65) + 97;
            }
        }
    }
    for (int l = 0; l < word.length(); l++)
    {
        cout << word[l];
    }
}
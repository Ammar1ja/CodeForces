#include <iostream>
#include <string>
using namespace std;

int main(void)
{
    string word;
    cin >> word;
    int letters=0;
    // remove duplicated letters
    for (int i = 0; i < word.length(); i++)
    {
        for (int j = i + 1; j < word.length(); j++)
        {
            if (word[i] == word[j])
                word[j]='\0';
        }
    }
    for(int l=0;l<word.length();l++)
    {
        if(word[l] != '\0')
        {
            letters++;
        }
    }
    
    if (letters % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}
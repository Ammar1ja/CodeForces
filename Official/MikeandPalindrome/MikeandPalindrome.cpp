#include <iostream>
#include <string>
using namespace std;

int isPalindrome(string word, int counter)
{
    int n = word.size() / 2;
    for (int i = 0; i < n; i++)
    {
        if (word[i] == word[word.size() - 1 - i])
            counter++;
    }
    return counter;
}
int main()
{
    string word;
    cin >> word;
    int counter = 0;
    if (word.size() % 2 != 0 && isPalindrome(word, counter) == (word.size() / 2))
        cout << "YES";
    else if (isPalindrome(word, counter) == (word.size() / 2) - 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
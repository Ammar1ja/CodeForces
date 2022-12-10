#include <iostream>
#include <string>
using namespace std;
void findVowels(string s, int n, int i, int count)
{
    if (n == 0)
        cout << count;
    else
    {
        if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'v' || s[i] == 'V' || s[i] == 'u' || s[i] == 'U')
            count++;
    }
    findVowels(s, --n, ++i, count);
}
int main()
{
    string s;
    cin.ignore(1, '\n');
    getline(cin, s);
    findVowels(s, s.size(), 0, 0);
}

// int findVowels(string s, int n, int i, int count)
// {
//     if (n == 0)
//         return count;
//     else
//     {
//         if (s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'v' || s[i] == 'V' || s[i] == 'u' || s[i] == 'U')
//             count++;
//     }
//     return findVowels(s, --n, ++i, count);
// }
// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << findVowels(s, s.size(), 0, 0) << endl;
// }
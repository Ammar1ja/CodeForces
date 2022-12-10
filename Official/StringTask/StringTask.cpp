#include <iostream>
#include <string>
using namespace std;

int main()
{
    string plainText,final;
    cin >> plainText;
    // lower case letters
    for(int i=0; i<plainText.length();i++)
    {
        if(plainText[i]>=65 && plainText[i]<=90)
        {
            plainText[i] = (plainText[i]-65) + 97;
        }
    }
    for(int i=0; i< plainText.length();i++)
    {
        if(plainText[i] != 'a'&& plainText[i] != 'A' && plainText[i] != 'i'&& plainText[i] != 'I'&& plainText[i] != 'o'&& plainText[i] != 'O'&& plainText[i] != 'u'&& plainText[i] != 'U'&& plainText[i] != 'Y'&& plainText[i] != 'y'&& plainText[i] != 'e' && plainText[i] != 'E')
        {
            final += ".";
            final+=(char) plainText[i];
        }
    }
    cout<<final<<endl;
}
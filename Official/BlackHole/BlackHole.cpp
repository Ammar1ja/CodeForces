#include <iostream>
#include <string>
using namespace std;
int main()
{
    string encreptedText, decreptedText, plainText, cipherText;
    char myArray[5][2][3];
    // the first letter in ascii code (a)
    int myChar = 97;
    // keyword
    int k1, k2, k3, Keyword;
    cout << "Keyword( , , ): ";
    cin >> k1 >> k2 >> k3;
    cout << "PLainText: ";
    cin >> plainText;
    int z = plainText.size();
    // 3d array of letters
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                if (myChar <= 122)
                {
                    myArray[i][j][k] = myChar;
                    myChar++;
                }
                else if (myChar > 122)
                {
                    myArray[i][j][k] = 48;
                }
            }
        }
    }
    // print 3d myArray

    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 2; j++)
        {

            for (int k = 0; k < 3; k++)
            {
                cout << myArray[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }
    Keyword = myArray[k1][k2][k3];
    cout << "your Keyword is:" << (char)Keyword << endl;
    // increption
    for (int l = 0; l < plainText.length(); l++)
    {
        encreptedText[l] = (((k1 + k2 + k3) * (Keyword - 97) % 26) + (plainText[l])); // (depth + row + column) * [l] =11
        cout << encreptedText[l];
    }
    cout << endl;
}
// decreption
//  cout << "Keyword( , , ): ";
//  cin >> k1 >> k2 >> k3;
//  Keyword = myArray[k1][k2][k3];
//  cout << "your Keyword is:" << (char)Keyword << endl;
//  cout << "cipherText: ";
//  cin >> cipherText;
//  for (int i = 0; i < cipherText.size(); i++)
//  {
//      if (cipherText[i] > Keyword)
//      {
//          decreptedText[i] = (cipherText[i] - Keyword) + keyword;
//          cout << decreptedText[i];
//      }
//      else if (Keyword > cipherText[i])
//      {
//          decreptedText[i] = keyword - ();
//          cout << decreptedText[i];
//      }
//      else if (cipherText[i] == Keyword)
//      {
//          decreptedText[i] = ((2 / (cipherText[i] - 97)) + 97);
//          cout << decreptedText[i];
//      }
//  }
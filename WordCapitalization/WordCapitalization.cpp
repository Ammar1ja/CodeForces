#include <iostream>
#include <string>
using namespace std;

int main (void)
{
    string word;
    cin>>word;
    if (word[0]>=97 && word[0]<=122)
    word[0] = (word[0] -97) + 65;
    cout<<word;
}
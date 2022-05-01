/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string firstText, secondText;
    cin >> firstText;
    cin >> secondText;
    // capital to small
        
        for(int i=0; i<firstText.length();i++)
        {
            if(firstText[i]>=65 && firstText[i]<=90)
            firstText[i] = firstText[i]+32;
            if(secondText[i]>=65 && secondText[i]<=90)
            secondText[i] =secondText[i] +32;
        }
        if(firstText == secondText)
        {
            cout<<0<<endl;
        } 
        else if(firstText>secondText)
        {
            cout<<1<<endl;
        }
        else if(firstText<secondText)
        {
            cout<<-1<<endl;
        } 
}

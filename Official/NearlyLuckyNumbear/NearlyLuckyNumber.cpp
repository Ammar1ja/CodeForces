#include<iostream>
#include<string>
using namespace std;
int main (void)
{
    int counter=0;
    string number;
    cin>>number;
    if (number.size()>1)
    {
    for(int i=0; i<number.size(); i++)
    {
        if(number[i] == '7' || number[i] =='4')
        {
            counter++;
        }
    }
    if(counter == 4 || counter ==7)
    cout<<"YES";
    else
    cout << "NO";
    }
    else
    cout << "NO";
}
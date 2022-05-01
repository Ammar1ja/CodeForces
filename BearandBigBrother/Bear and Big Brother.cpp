#include <iostream>
using namespace std;
int main (void)
{
    double weight1,weight2;
    cin >> weight1 >> weight2;
    int counter=0;
    while (weight1 <= weight2)
    {
        weight1*=3;
        weight2*=2;
        counter++;
    }
    cout<<counter;
}

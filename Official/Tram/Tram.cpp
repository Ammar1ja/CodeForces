#include <iostream>
using namespace std;

int main (void)
{
    int l,x=0,max=x;
    cin >> l;
    for(int i=0; i<l; i++)
    {
        int arriving,leaving;
        cin >> leaving >> arriving;
        x = (arriving - leaving) + x;
        if (x>max)
        max =x;
    }
    cout << max;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
    int rowSteps=0,columnSteps=0;
    int matrix [5] [5];
    
        for(int i=0;i<=4;i++)
        {   
            for(int j=0;j<=4;j++)
            {
            cin>>matrix[i][j];
            }
        }

    for(int k=0;k<=4;k++)
    {
        for(int l=0;l<=4;l++)
        {
            if(matrix[k][l]==1)
            {
                if(k>=2) rowSteps = k-2;
                else rowSteps = 2-k;
                if (l>=2) columnSteps = l-2;
                else columnSteps = 2-l;
            }
        }
        cout<<endl;
    }
    cout<<abs(columnSteps)+abs(rowSteps);
}

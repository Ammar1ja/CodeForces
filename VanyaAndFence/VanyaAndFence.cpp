#include <iostream>
using namespace std;
int main()
{
    int people,fence,count=0;;
    cin >> people >> fence;
    int* arr= new int[people];
    for (int i = 0; i < people; i++)
    {
        cin >> arr[i];
        if(arr[i] >fence)
        arr[i] = 2;
        else 
        arr[i] =1;
    }
    for (int j = 0; j < people; j++)
    {
        count+=arr[j];
    }
    cout<<count;
}
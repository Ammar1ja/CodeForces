#include <iostream>
using namespace std;
int main()
{
    int n,counter=0;
    cin >> n;
    int* arr1 = new int[n];
    int* arr2 = new int[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i]>>arr2[i];
    }
    for(int j = 0; j < n; j++)
    {
        if(arr2[j] - arr1[j] >=2)
        counter++;
    }
    cout << counter;
    
}
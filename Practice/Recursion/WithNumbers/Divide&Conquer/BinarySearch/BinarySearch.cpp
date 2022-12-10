#include <iostream>
using namespace std;
int binarySearch(int arr[], int left, int right, int x)
{
    if (left > right)
    {
        return -1;
    }
    int mid = (left + right) / 2;
    if (x == arr[mid])
    {
        return mid;
    }
    if (x < arr[mid])
    {
        return binarySearch(arr, left, mid - 1, x);
    }

    return binarySearch(arr, mid + 1, right, x);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << binarySearch(arr, 0, 9, 8) << endl;
}
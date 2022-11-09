#include <iostream>
#include "./mylibrary.h"
using namespace std;
using namespace array;

int main(void)
{
}

// void merge(int r, int mid, int l, int array[], int n)
// {
//     int i = l;       // starting index for left sub array
//     int j = mid + 1; // starting index for right sub array
//     int k = l;       // starting index for temp array
//     int temp[n];
//     while (i <= mid && j <= r)
//     {
//         if (array[i] <= array[j])
//         {
//             temp[k] = array[i];
//             i++;
//             k++;
//         }
//         else
//         {
//             temp[k] = array[j];
//             j++;
//             k++;
//         }
//     }
//     while (i <= mid)
//     {
//         temp[k] = array[i];
//         i++;
//         k++;
//     }
//     while (j <= r)
//     {
//         temp[k] = array[j];
//         j++;
//         k++;
//     }
//     for (int i = 0; i < l; i++)
//     {
//         array[i] = temp[i];
//     }
// }

// void merge_sort(int r, int l, int array[], int n)
// {

//     // false if the array have one element
//     if (l < r)
//     {
//         int mid = (l + r) / 2;
//         merge_sort(0, mid, array, n);
//         merge_sort(mid + 1, l, array, n);
//         merge(r, mid, l, array, n);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int *array = new int[n];
//     getting_values_int(n, array);
//     merge_sort(0, n - 1, array, n);
//     for (int i = 0; i < n; i++)
//     {
//         cout << array[i] << " ";
//     }
// }
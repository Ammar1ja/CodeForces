#include <iostream>
using namespace std;
void merge(int data[], int start, int mid, int end)
{
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    // while both sub-array have values, then try and merge them in sorted order
    while (i <= mid && j <= end)
        if (data[i] <= data[j])
        {
            temp[k] = data[i];
            i++;
            k++;
        }
        else
        {
            temp[k] = data[j];
            k++;
            j++;
        }
    // Add the rest of the values from the left sub-array into the result
    while (i <= mid)
    {
        temp[k] = data[i];
        k++;
        i++;
    }
    // Add the rest of the values from the right sub-array into the result
    while (j <= end)
    {
        temp[k] = data[j];
        k++;
        j++;
    }
    for (i = start; i <= end; i++)
    {
        data[i] = temp[i - start];
    }
}
void mergeSort(int data[], int start, int end)
{
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(data, start, mid);
        mergeSort(data, mid + 1, end);
        merge(data, start, mid, end);
    }
}
int main()
{
    int data[] = {-5, 20, 10, 3, 2, 0};
    mergeSort(data, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << data[i] << " ";
    }
}
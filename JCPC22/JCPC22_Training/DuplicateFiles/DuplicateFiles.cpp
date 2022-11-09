#include <iostream>
#include <string>
using namespace std;
int print_array(int n, int array[])
{
    for (int i = 0; i < n; i++)
    {
        cout << array[i] << endl;
    }
}
int main(void)
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    print_array(sizeof(array) / sizeof(array[0]), array);
}
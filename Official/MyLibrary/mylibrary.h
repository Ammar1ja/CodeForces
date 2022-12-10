#ifndef MYLIBRARY_AMMARJABER_
#define MYLIBRARY_AMMARJABER_
namespace array
{
    // Printing
    void print_int_array(int n, int array[])
    {
        // n: number of elements
        // array: array of integers
        for (int i = 0; i < n; i++)
        {
            std::cout << array[i] << " ";
        }
    }
    void print_char_array(int n, char array[])
    {
        // n: number of elements
        // array: array of chars
        for (int i = 0; i < n; i++)
        {
            std::cout << array[i] << " ";
        }
    }
    // Getting Values
    void getting_values_int(int n, int array[])
    {
        // n: number of elements
        // array: array of integers
        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
        }
    }
    void getting_values_char(int n, char array[])
    {
        // n: number of elements
        // array: array of chars
        for (int i = 0; i < n; i++)
        {
            std::cin >> array[i];
        }
    }
    // Linear search
    void remove_number(int n, int k, int array[])
    {
        // n: number of elements
        // k: chosen number to be removed
        // array: array of chars
        getting_values_int(n, array);
        for (int i = 0; i < n; i++)
        {
            if (k == array[i])
            {
                for (int j = i; j < n; j++)
                {
                    array[j] = array[j + 1];
                }
            }
        }
        print_int_array(n - 1, array);
    }
    void remove_letter(int n, char k, char array[])
    {
        // n: number of elements
        // k: chosen number to be removed
        // array: array of chars
        getting_values_char(n, array);
        for (int i = 0; i < n; i++)
        {
            if (k == array[i])
            {
                for (int j = i; j < n; j++)
                {
                    array[j] = array[j + 1];
                }
            }
        }
        print_char_array(n - 1, array);
    }
    void find_number_index(int n, int e, int array[])
    {
        // n: number of elements
        // e: The element you want to find
        // array: array of integers
        getting_values_int(n, array);
        // binary search
        for (int i = 0; i < n; i++)
        {
            if (array[i] == e)
            {
                std::cout << i;
                break;
            }
        }
    }
    void find_letter_index(int n, char e, char array[])
    {
        // n: number of elements
        // e: The element you want to find
        // array: array of chars
        getting_values_char(n, array);
        // binary search
        for (int i = 0; i < n; i++)
        {
            if (array[i] == e)
            {
                std::cout << i;
                break;
            }
        }
    }
    void small_to_capital(std::string &s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 97 && s[i] <= 122)

            {
                s[i] = s[i] - 32;
            }
        }
        std::cout << s;
    }
    void capital_to_small(std::string &s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)

            {
                s[i] = s[i] + 32;
            }
        }
        std::cout << s;
    }
    // Binary Search
    // Bubble Sort
    void bubble_sort(int n, int array[])
    {
        int temp;
        getting_values_int(n, array);
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
            }
        }
        print_int_array(n, array);
    }
    // Selection Sort
    void selection_sort(int n, int array[])
    {
        getting_values_int(n, array);
        int i, j, min_in;
        for (i = 0; i < n; i++)
        {
            min_in = i;
            for (j = i + 1; j < n; j++)
                if (array[j] < array[min_in])
                    min_in = j;
            std::swap(array[i], array[min_in]);
        }
        print_int_array(n, array);
    }
}
#endif
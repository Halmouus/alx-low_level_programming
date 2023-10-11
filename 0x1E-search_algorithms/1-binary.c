#include "search_algos.h"

/**
 * print_array - Prints an array of integers
 * @array: The array or subarray to be printed
 * @start: starting index
 * @end: ending index
 */
void print_array(const int *array, int start, int end)
{
    int i;
    i = 0;
    printf("Searching in array: ");
    while (i <= end)
    {
        if (i >= start)
        {
            if (i > start)
                printf(", ");
            printf("%d", array[i]);
        }
        ++i;
    }
    printf("\n");
}

/**
 * binary_search_alg - Prints an array of integers
 * @array: The array to be searched
 * @start: starting index
 * @end: ending index
 * @value: lookup value
 */
int binary_search_alg(int *array, int start, int end, int value)
{
    int mid;

    if (start <= end) {
        mid = (start + end) / 2;
        print_array(array, start, end);
        
        if (array[mid] == value) {
            return mid;
        }

        if (array[mid] > value) {
            return binary_search_alg(array, start, mid - 1, value);
        } else {
            return binary_search_alg(array, mid + 1, end, value);
        }
    }

    return (-1);
}

/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 * @array - pointer to the first element
 * of the array to search in
 * @size - number of elements in array
 * @value - value to search for
 *
 * Return: index where value is located, or -1
 * otherwise
 */
int binary_search(int *array, size_t size, int value)
{
    if (!array)
        return (-1);
    return binary_search_alg(array, 0, (int)(size - 1), value);    
}
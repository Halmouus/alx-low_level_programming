#include "search_algos.h"

/**
 * array - pointer to the first element
 * of the array to search in
 * size - number of elements in array
 * value - value to search for
 *
 * Return: index where value is located, or -1
 * otherwise
 */
int linear_search(int *array, size_t size, int value)
{
    int i;
    if (!array)
        return (-1);
    
    for (i = 0; i < (int)size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
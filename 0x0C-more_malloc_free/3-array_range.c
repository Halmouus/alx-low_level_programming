#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers
 * @min: initial value
 * @max: final value
 * Return: pointer to the created array, or NULL if it fails
 */
int *array_range(int min, int max)
{
int size, i, j = 0;
int *ptr;
size = max - min;
if (size < 0)
return (NULL);
ptr = malloc(sizeof(int) * (size + 1));
if (ptr == 0)
return (NULL);
for (i = min; i <= max; i++, j++)
ptr[j] = i;
return (ptr);
}

#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: intitialization character
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
int i = 0;
char *array;
if (size == 0)
return (0);
array = malloc(sizeof(char) * size);
if (array == 0)
return (0);
while (i < size)
{
*(array + i) = c;
i++;
}
return (array);
}

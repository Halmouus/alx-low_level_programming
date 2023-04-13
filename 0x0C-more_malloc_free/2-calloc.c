#include "main.h"
#include <stdlib.h>

/**
 * _calloc -  function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of the array
 * Return: pointer to the allocated memory, or NULL if it fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
void *ptr;
unsigned char *ptr2;
if (nmemb == 0 || size == 0)
return (NULL);
ptr = malloc(size * nmemb);
if (ptr == 0)
return (NULL);
ptr2 = ptr;
for (i = 0; i < nmemb; i++)
*(ptr2 + i) = 0;
return (ptr);
}

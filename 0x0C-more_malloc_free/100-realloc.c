#include "main.h"
#include <stdlib.h>
/**
 * _memcpy - copies memory area.
 * @dest: string to be copied into
 * @n: first bytes to be copied
 * @src: string to be copied from
 * Return: pointer to the result dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
*(dest + i) = *(src + i);
i++;
}
return (dest);
}
/**
 * _realloc -  function that reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size of ptr
 * @new_size: new size of the memory
 * Return: pointer to the created array, or NULL if it fails
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
unsigned int min_size = old_size;
void *newptr;
if (old_size == new_size)
return (ptr);
if (ptr == NULL)
return (malloc(new_size));
if (new_size == 0)
{
free(ptr);
return (NULL);
}
newptr = malloc(new_size);
if (newptr == NULL)
return (NULL);
if (old_size > new_size)
{
min_size = new_size;
}
_memcpy(newptr, ptr, min_size);
free(ptr);
return (newptr);
}

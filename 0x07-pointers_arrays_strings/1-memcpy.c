#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: string to be copied into
 * @n: first bytes to be copied
 * @src: string to be copied from
 * Return: pointer to the result dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

#include "main.h"

/**
 * _strcat - function that concatenates two strings.
 * @dest: string to be appended to
 * @src : string to be appended to dest
 * @n : bytes used from src (at most)
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
if (j >= n)
{
break;
}
dest[i] = src[j];
j++;
i++;
}
dest[i] = '\0';
return (dest);
}

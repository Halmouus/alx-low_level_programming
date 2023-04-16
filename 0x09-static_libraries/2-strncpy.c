#include "main.h"

/**
 * _strncpy - function that copies the string pointed to by src,
 * up to n bytes.
 * @dest: buffer pointed to by dest
 * @src : string pointed to by src
 * @n : bytes used from src (at most)
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest [i] = '\0';
i++;
}
return (dest);
}

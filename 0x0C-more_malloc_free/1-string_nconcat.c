#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  function that allocates memory
 * @s1: string argument 1
 * @s2: string to be appended to s1
 * @n: number of chars to be concatenated from s2
 * Return: pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j = 0, size1 = 0, size2 = 0, size;
char *s;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[size1])
size1++;
while (s2[size2] && size2 < n)
size2++;
size = size1 + size2;
s = malloc(sizeof(char) * (size + 1));
if (s == NULL)
return (NULL);
for (i = 0; i < size; i++)
{
if (i >= size1)
{
s[i] = s2[j];
j++;
}
else
{
s[i] = s1[i];
}
}
s[i] = '\0';
return (s);
}

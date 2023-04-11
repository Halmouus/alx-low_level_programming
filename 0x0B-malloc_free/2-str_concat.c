#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: pointer to the new string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
unsigned int size1 = 0, size2 = 0, i = 0, j = 0;
char *new_str;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[size1])
{
size1++;
}
while (s2[size2])
{
size2++;
}
if ((size1 + size2) == 0)
return (0);
new_str = malloc(sizeof(char) * (size1 + size2 + 1));
if (new_str == 0)
return (0);
while (i <= (size1 + size2))
{
if (i >= size1)
{
new_str[i] = s2[j];
j++;
}
else
{
new_str[i] = s1[i];
}
i++;
}
return (new_str);
}

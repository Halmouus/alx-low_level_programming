#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function  that returns a pointer to a newly allocated space
 * in memory which contains a copy of the string given as a parameter.
 * @str: string input
 * Return: pointer to the new string, or NULL if it fails
 */
char *_strdup(char *str)
{
unsigned int size = 1, i = 0;
char *new_str;
if (str == 0)
return (0);
while (str[size])
{
size++;
}
if (size == 0)
return (0);
new_str = malloc(sizeof(char) * (size + 1));
if (new_str == 0)
return (0);
while (i <= size)
{
new_str[i] = str[i];
i++;
}
return (new_str);
}

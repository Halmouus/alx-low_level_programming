#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: string whose length is returned
 * Return: c, the length of the string
 */
int _strlen(char *s)
{
int c = 0, i = 0;
while (s[i] != '\0')
{
c++;
i++;
}
return (c);
}

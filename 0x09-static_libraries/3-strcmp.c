#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: first string to be compared
 * @s2 : second string to be compared
 * Return: 0 if equal, or the difference between the ASCII value of
 * the first non equal character of the string
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, n;
while (s1[i] != '\0')
{
n = s1[i] - s2[i];
if (n != 0)
{
break;
}
i++;
}
n = s1[i] - s2[i];
return (n);
}

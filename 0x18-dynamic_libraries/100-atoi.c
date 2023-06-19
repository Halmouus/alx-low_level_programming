#include "main.h"

/**
 * _atoi - function that converts a string to an integer.
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
int val = 0, sign = 1, nonum = 1;
while (*s)
{
if (*s == '-')
{
sign = -sign;
}
if (*s >= '0' && *s <= '9')
{
nonum = 0;
val = val * 10 + (*s - '0');
if (*(s + 1) < '0' || *(s + 1) > '9')
{
break;
}
}
s++;
}
if (nonum == 1)
return (0);
else
return (sign *val);
}

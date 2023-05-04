#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _pow - calculate x raised to power n
 * @x: base
 * @n: power
 * Return: x raised to power n
 */
int _pow(int x, unsigned int n)
{
int power = 1;
while (n--)
power *= x;
return (power);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0, len = 0;
unsigned int conv = 0;
if (!b)
return (0);
while (b[len])
{
len++;
}
while (b[i])
{
if (b[i] != '0' && b[i] != '1')
return (0);
conv += (b[i] - '0') * _pow(2, len - 1 - i);
i++;
}
return (conv);
}

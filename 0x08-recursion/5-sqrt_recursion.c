#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * @x: potential square root
 * Return: the natural square root of n, -1 if none
 */
int help(int x, int n);
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else if (n < 2)
return (n);
else
return (help(n / 2, n));
}
/**
 * help - returns the natural square root of a number
 * @n: number
 * @x: potential square root
 * Return: the natural square root of n, -1 if none
 */
int help(int x, int n)
{
if (x * x < n)
return (-1);
else if (x * x == n)
return (x);
else
return (help(x - 1, n));
}

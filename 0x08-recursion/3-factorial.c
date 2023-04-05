#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: integer argument
 * Return: factorial of n if n >= 0 , -1 otherwise
 */
int factorial(int n)
{
if (n == 0)
return (1);
else if (n < 0)
return (-1);
else
return (n * factorial(n - 1));
}

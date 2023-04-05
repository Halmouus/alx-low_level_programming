#include "main.h"

/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise returns 0
 * @n: number
 * @p: number arg2, iterator for help function
 * Return: 1 if prime, 0 if not
 */
int help(int n, int p);
int is_prime_number(int n)
{
if (n == 2)
return (1);
else if (n > 2)
return (help(n, 2));
else
return (0);
}
/**
 * help -  function that returns 1 if n is a prime number,
 * otherwise returns 0
 * @n: number arg1, to be checked for prime or not
 * @p: number arg2, iterator
 * Return: 1 if prime, 0 if not
 */
int help(int n, int p)
{
if (n != p && n % p == 0)
return (0);
if (n == p)
return (1);
else
return (help(n, p + 1));
}

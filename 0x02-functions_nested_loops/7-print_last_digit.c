#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n : integer that will be checked
 * Return: last digit of the given number
 */
int print_last_digit(int n)
{
int m;
if (n < 0)
{
m = -1 * (n % 10);
}
else
{
m = n % 10;
}
_putchar(m + '0');
return (m);
}


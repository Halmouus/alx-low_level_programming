#include "main.h"
/**
 * print_last_digit - function that prints the last digit of a number
 * @n : integer that will be checked
 * Return: last digit of the given number
 */
int print_last_digit(int n)
{
if (n < 0)
{
_putchar((-n % 10) + '0');
return (-n % 10);
}
else
{
_putchar((n % 10) + '0');
return (n % 10);
}
}


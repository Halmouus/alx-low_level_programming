#include "main.h"

/**
 * print_number - function that prints and integer
 * @n: number to be printed
 */

void print_number(int n)
{
unsigned int a = n;
if (n < 0)
{
_putchar('-');
a = -a;
}
if ((a / 10) > 0)
{
print_number(a / 10);
}
_putchar((a % 10) + '0');
}

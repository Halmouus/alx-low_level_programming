#include "main.h"

/**
 * print_diagonal - function that draws a straight line in the terminal
 * @n : lengnth of the line
 */
void print_diagonal(int n)
{
int i, a = n;
if (n > 0)
{
while (n--)
{
i = a - n;
while (--i)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}


#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n : lengnth of the line
 */
void print_line(int n)
{
if (n > 0)
{
while (n--)
{
_putchar('_');
}
}
_putchar('\n');
}


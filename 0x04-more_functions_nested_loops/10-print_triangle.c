#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size : size of the triangle
 */
void print_triangle(int size)
{
int i = 1, j;
if (size > 0)
{
while (i <= size)
{
j = size;
while (j--)
{
if (j >= i)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
i++;
}
}
else
{
_putchar('\n');
}
}

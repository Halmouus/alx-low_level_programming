#include "main.h"
/**
 * times_table - function that printsthe 9 times table, starting with 0
 * Return: 0 success
 */
void times_table(void)
{
int m, n, p, i, j;

for (m = 0; m < 10; m++)
{n = 0;
for (n = 0; n < 10; n++)
{p = m * n;
if (p > 9)
{
i = p / 10;
j = p % 10;
_putchar(i + '0');
_putchar(j + '0');
if (n != 9)
{
_putchar(',');
}
_putchar(' ');
}
else
{
_putchar(p + '0');
if (n != 9)
{
_putchar(',');
}
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}

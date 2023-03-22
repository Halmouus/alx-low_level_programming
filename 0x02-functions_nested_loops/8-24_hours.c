#include "main.h"
/**
 * jack_bauer - function that prints every minute of
 * the day of Jack Bauer, starting from 00:00 to 23:59
 * Return: 0 success
 */
void jack_bauer(void)
{
int i, j, k, l;
i = 0, j = 0;
while (i < 3)
{
if (i == 2 && j == 4)
{
break;
}
j = 0;
while (j < 10)
{
if (i == 2 && j == 4)
{
break;
}
k = 0;
while (k < 6)
{
l = 0;
while (l < 10)
{
_putchar(i + '0');
_putchar(j + '0');
_putchar(':');
_putchar(k + '0');
_putchar(l + '0');
_putchar('\n');
l++;
}
k++;
}
j++;
}
i++;
}
}


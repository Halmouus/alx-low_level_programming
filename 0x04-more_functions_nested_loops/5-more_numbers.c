#include "main.h"

/**
 * more_numbers - function that prints the numbers
 * from 0 to 14, 10 times followed by a new line
 */
void more_numbers(void)
{
int i = 10, j;

while (i--)
{
for (j = 0; j <= 14; j++)
{
if (j > 9)
{
_putchar((j / 10) + '0');
}
_putchar((j % 10) + '0');
}
_putchar('\n');
}
}


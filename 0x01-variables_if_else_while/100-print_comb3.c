#include <stdlib.h>
#include <stdio.h>
/**
 * main - C program that prints all possible combinations
 * of two digits followed by a new line
 * Return: 0 always
 */
int main(void)
{
int i = 0, j;
while (i < 10)
{
j = 0;
while (j < 10)
{
if (i == 9 && j == 9)
{
putchar('\n');
break;
}
if (i == j || (i + j == j + i && (i * 10) + j > (j * 10) + i))
{
j++;
continue;
}
if (!(i == 0 && j == 1))
{
putchar(',');
putchar(' ');
}
putchar(i + '0');
putchar(j + '0');
j++;
}
i++;
}
return (0);
}

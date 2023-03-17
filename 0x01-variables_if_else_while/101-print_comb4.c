#include <stdlib.h>
#include <stdio.h>
/**
 * main - C program that prints all possible combinations
 * of three digits followed by a new line
 * Return: 0 always
 */
int main(void)
{
int i = 0, j, k;
while (i < 10)
{
j = 0;
while (j < 10)
{
k = 0;
while (k < 10)
{
if (i == 9 && j == 9 && k == 9)
{
putchar('\n');
break;
}
if (i == j || i == k || j == k || (i * 100) + (j * 10) + k >
(k * 100) + (j * 10) + i || (i * 100) + (j * 10) + k > (k * 100)
+ (i * 10) + j || (i * 100) + (j * 10) + k > (i * 100)
+ (k * 10) + j || (i * 100) + (j * 10) + k > (j * 100)
+ (i * 10) + k || (i * 100) + (j * 10) + k > (j * 100)
+ (k * 10) + i)
{
k++;
continue;
}

if (!(i == 0 && j == 1 && k == 2))
{
putchar(',');
putchar(' ');
}
putchar(i + '0');
putchar(j + '0');
putchar(k + '0');
k++;
}
j++;
}
i++;
}
return (0);
}

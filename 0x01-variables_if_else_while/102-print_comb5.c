#include <stdlib.h>
#include <stdio.h>
/**
 * main - C program that prints all possible combinations
 * of two two digits followed by a new line
 * Return: 0 always
 */
int main(void)
{
int i = 0, j, k, l;
while (i < 10)
{
j = 0;
while (j < 10)
{
k = 0;
while (k < 10)
{
l = 0;
while (l < 10)
{
if (i == 9 && j == 9 && k == 9 && l == 9)
{
putchar('\n');
break;
}
if (i * 10 + j == k * 10 + l || i * 10 + j == l * 10 + k ||
i * 1000 + j * 100 + k * 10 + l > k * 1000 + l * 100 + i * 10 + j)
{
l++;
continue;
}
if (!(i == 0 && j == 0 && k == 0 && l == 1))
{
putchar(',');
putchar(' ');
}
putchar(i + '0');
putchar(j + '0');
putchar(' ');
putchar(k + '0');
putchar(l + '0');
l++; }
k++; }
j++; }
i++; }
return (0);
}

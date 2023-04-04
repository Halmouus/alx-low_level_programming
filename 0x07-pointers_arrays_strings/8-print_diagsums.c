#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: array
 * @size : size of the array
 */
void print_diagsums(int *a, int size)
{
{
int sum1 = 0, sum2 = 0, i = 0;

while (i < size)
{
sum1 = sum1 + a[i * size + i];
i++;
}
while (i--)
{
sum2 += a[i *size + (size - i - 1)];
}
printf("%d, %d\n", sum1, sum2);
}
}

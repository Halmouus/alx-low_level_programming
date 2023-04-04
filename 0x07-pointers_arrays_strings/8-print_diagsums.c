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
int sum1 = 0, sum2 = 0;
int i = 0;
while (i < size)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
i++;
}
printf("%d, %d\n", sum2, sum1);
}

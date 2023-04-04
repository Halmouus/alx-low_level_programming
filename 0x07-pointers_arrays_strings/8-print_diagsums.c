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
int (*ptr)[size] = (int (*)[size])a;
while (i < size)
{
sum1 += ptr[i][size - 1 - i];
sum2 += ptr[i][i];
i++;
}
printf("%d, %d\n", sum2, sum1);
}

#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line
 * @a: array of integers
 * @n : number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
int i = 0;
while (i <= (n - 1))
{
if (i > 0 && i < n)
{
printf(", ");
}
printf("%d", a[i]);
i++;
}
printf("\n");
}

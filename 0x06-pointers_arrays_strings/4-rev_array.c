#include "main.h"

/**
 * reverse_array - function that  reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
int i = 0, temp;
while (i < n)
{
temp = a[i];
a[i] = a[n - 1];
a[n - 1] = temp;
i++;
n--;
}
}
